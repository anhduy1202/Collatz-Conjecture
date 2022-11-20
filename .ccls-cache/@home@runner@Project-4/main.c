#include <mqueue.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// constants
#define MAX_THREADS 10;
#define MIN_RAND 1;
#define MAX_RAND 10000;
#define NUM_IN_QUEUE 10;
#define MAX_STEPS 100000;
#define PROCESS_DUR 120;
#define MESSAGE_QUEUE_NAME "/msgqueue"
#define MESSAGE_PRIORITY 1

// default value
int debug = 0; // 0: OFF 1: ON
int max_threads = MAX_THREADS;
int min_rand = MIN_RAND;
int max_rand = MAX_RAND;
int num_in_queue = NUM_IN_QUEUE;
int max_steps = MAX_STEPS;
int process_dur = PROCESS_DUR;

typedef struct {
  int index;
  int original_number;
  int calculated_number;
  int number_of_steps;
} MessageUnit;

void fill_msg_queue(mqd_t *); // Producer
void process_msg(mqd_t *);    // Consumer
// helper functions
void help_menu();

int main(int argc, char *argv[]) {
  int next_idx = 1;
  // Process command line args
  while (next_idx < argc) {
    if (!strcmp(argv[next_idx], "-h") || !strcmp(argv[next_idx], "--help")) {
      ++next_idx;
      help_menu();
    } else if (!strcmp(argv[next_idx], "-d")) {
      ++next_idx;
      debug = 1;
    } else if (!strcmp(argv[next_idx], "-mt")) {
      ++next_idx;
      max_threads = atoi(argv[next_idx]);
      ++next_idx;
    } else if (!strcmp(argv[next_idx], "-mir")) {
      ++next_idx;
      min_rand = atoi(argv[next_idx]);
      ++next_idx;
    } else if (!strcmp(argv[next_idx], "-mar")) {
      ++next_idx;
      max_rand = atoi(argv[next_idx]);
      ++next_idx;
    } else if (!strcmp(argv[next_idx], "-niq")) {
      ++next_idx;
      num_in_queue = atoi(argv[next_idx]);
      ++next_idx;
    } else if (!strcmp(argv[next_idx], "-ms")) {
      ++next_idx;
      max_steps = atoi(argv[next_idx]);
      ++next_idx;
    } else if (!strcmp(argv[next_idx], "-pd")) {
      ++next_idx;
      process_dur = atoi(argv[next_idx]);
      ++next_idx;
    } else {
      // unknown arg
      printf("invalid command %s\n", argv[next_idx]);
      help_menu();
      return 0;
    }
  }
  if (debug) {
    printf("\n \n max_threads: %d \n \n", max_threads);
    printf("min_rand: %d \n \n", min_rand);
    printf("max_rand: %d \n \n", max_rand);
    printf("num in queue: %d \n \n", num_in_queue);
    printf("max steps: %d \n \n", max_steps);
    printf("process duration: %d \n \n", process_dur);
  }

  // Create message queue (mq_open)
  struct mq_attr queue_attrib;
  queue_attrib.mq_flags = 0;
  queue_attrib.mq_maxmsg = 10;
  queue_attrib.mq_msgsize = sizeof(MessageUnit);
  queue_attrib.mq_curmsgs = 0;

  mq_unlink(MESSAGE_QUEUE_NAME);
  mqd_t message_queue = mq_open(MESSAGE_QUEUE_NAME, O_RDWR | O_CREAT | O_EXCL,
                                0644, &queue_attrib);
  if (message_queue == (mqd_t)-1) {
    fprintf(stderr, "Can't open message queue \n \n");
    perror("mq_open");
    exit(0);
  } else {
    if (debug) {
      printf("Successfully open msg queue \n \n");
    }
  }
  // PRODUCER
  pthread_t producer;
  int producer_status =
      pthread_create(&producer, NULL, (void *)fill_msg_queue, &message_queue);
  if (producer_status != 0) {
    printf("Error creating producer thread \n \n");
    exit(1);
  } else {
    if (debug) {
      printf("Producer thread is created! \n \n");
    }
  }

  // CONSUMER
  pthread_t *consumer = malloc(sizeof(MessageUnit) * max_threads);
  for (int i = 0; i < max_threads; i++) {
    // Create consumer thread (pthread_create)
    int consumer_status =
        pthread_create(consumer, NULL, (void *)process_msg, &message_queue);
    if (consumer_status != 0) {
      printf("Error creating consumer thread \n \n");
      exit(1);
    } else {
      if (debug) {
        printf("Consumer thread is created! \n \n");
      }
    }
  }

  int join_status = pthread_join(producer, NULL);
  int close_stat = mq_close(message_queue);
  mq_unlink(MESSAGE_QUEUE_NAME);
  return 0;
}

void fill_msg_queue(mqd_t *msq) {
  int upper = max_rand;
  int lower = min_rand;
  // Loop max numbers
  for (int i = 0; i < num_in_queue; i++) {
    // create a random number, put that number in our msg queue
    MessageUnit *buffer = malloc(sizeof(MessageUnit));
    buffer->index = i;
    buffer->original_number = (rand() % (upper - lower + 1)) + lower;
    buffer->calculated_number = buffer->original_number;
    buffer->number_of_steps = 0;
    printf("Putting message (id: %d, value: %d ) to message queue \n \n",
           buffer->index, buffer->original_number);
    if (debug) {
      printf("Index: %d \n \n", buffer->index);
      printf("Original number: %d \n \n", buffer->original_number);
      printf("Calculated number: %d \n \n", buffer->calculated_number);
      printf("Steps number: %d \n \n", buffer->number_of_steps);
    }
    // Send to msg queue
    int status = mq_send(*msq, buffer, sizeof(MessageUnit), MESSAGE_PRIORITY);
    sleep(1);
    if (status == -1) {
      printf("Error putting number to msg queue \n \n");
    } else {
      if (debug) {
        printf("Successfully putting number to msg queue \n \n");
      }
    }
  }
  printf("Done putting number in msg queue \n \n");
}
void process_msg(mqd_t *msq) {
  /* Determine max. msg size; allocate buffer to receive msg */
  struct mq_attr attr;
  mq_getattr(*msq, &attr);
  char *buffer = malloc(sizeof(MessageUnit));
  // pop the front of the msg queue into var (mq_receive)
  unsigned nr = mq_receive(*msq, buffer, attr.mq_msgsize, NULL);
  if (debug) {
    printf("Read %ud bytes from MQ\n", nr);
    printf("message was %d\n", *buffer);
  }
  // CALCULATION

  free(buffer);
  printf("consumer complete\n");
}
void help_menu() {
  printf("\nHelp menu \n \n"
         "-h --help: print this help \n \n"
         "-d: Activate debug mode \n \n"
         "-mt: Number of consumer threads"
         " ( preferably less than 10 ) \n \n"
         "-mir: Minimum random number \n \n"
         "-mar: Maximum random number \n \n"
         "-niq: Number of initial numbers in queue \n \n"
         "-ms: Maximum number of steps \n \n"
         "-pd: number of seconds process can run \n \n"
         "Example: \n \n"
         "./main --help \n \n"
         "./main -d -ms 12 \n \n"
         "./main -d -mir 23 -mar 40 -niq 4 -mt 4 -ms 90 -pd 3\n \n");
}