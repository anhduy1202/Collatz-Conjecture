# Collatz-Conjecture
> Collatz Conjecture with threads written in C

# Help menu
``` ./main -h ``` or ``` ./main --help ```

![image](https://user-images.githubusercontent.com/58461444/203973741-875be8ef-d5e0-423f-b0ed-7e7eb73cce98.png)

# Example run
## Default 
``` ./main ```

```
Successfully open msg queue 
 
Putting message (id: 0, value: 9384 ) to message queue 
 

9384 -> 1 = 122 steps 
 
Putting message (id: 1, value: 887 ) to message queue 
 

887 -> 1 = 54 steps 
 
Putting message (id: 2, value: 2778 ) to message queue 
 

2778 -> 1 = 128 steps 
 
Putting message (id: 3, value: 6916 ) to message queue 
 

6916 -> 1 = 106 steps 
 
Putting message (id: 4, value: 7794 ) to message queue 
 

7794 -> 1 = 145 steps 
 
Putting message (id: 5, value: 8336 ) to message queue 
 

8336 -> 1 = 127 steps 
 
Putting message (id: 6, value: 5387 ) to message queue 
 

5387 -> 1 = 147 steps 
 
Putting message (id: 7, value: 493 ) to message queue 
 

493 -> 1 = 48 steps 
 
Putting message (id: 8, value: 6650 ) to message queue 
 

6650 -> 1 = 137 steps 
 
Putting message (id: 9, value: 1422 ) to message queue 
 

1422 -> 1 = 65 steps 
 
Message queue closed! 
```

## Max thread: 2, Num in queue: 2
```./main -mt 2 -niq 2```

```
Successfully open msg queue 
 
Putting message (id: 0, value: 9384 ) to message queue 
 

9384 -> 1 = 122 steps 
 
Putting message (id: 1, value: 887 ) to message queue 
 

887 -> 1 = 54 steps 
 
Message queue closed! 
```

# With Debug Mode on
``` ./main -d -mt 2 -niq 2 ```

```
 
max_threads: 2 
 
min_rand: 1 
 
max_rand: 10000 
 
num in queue: 2 
 
max steps: 100000 
 
process duration: 120 
 
Successfully open msg queue 
 
--- TIME STARTING ---: 1669375053 
 
Producer thread is created! 
 
Consumer thread is created! 
 
Consumer thread is created! 
 
--- Elapsed Time is: 0.000000 
 
--- Elapsed Time is: 0.000000 
 
--- Elapsed Time is: 0.000000 
 
Putting message (id: 0, value: 9384 ) to message queue 
 
Index: 0 
 
Original number: 9384 
 
Calculated number: 9384 
 
Steps number: 0 
 
Original number was 9384
Calculated number was 9384
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 4692
Original number was 9384
Calculated number was 2346
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1173
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 3520
--- Elapsed Time is: 0.000000 
 
Original number was 9384
--- Elapsed Time is: 0.000000 
 
Calculated number was 1760
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 880
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 440
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 220
Original number was 9384
Calculated number was 110
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 55
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 166
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 83
--- Elapsed Time is: 0.000000 
 
Original number was 9384
--- Elapsed Time is: 0.000000 
 
Calculated number was 250
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 125
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 376
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 188
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 94
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 47
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 142
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 71
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 214
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 107
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 322
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 161
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 484
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 242
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 121
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 364
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 182
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 91
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 274
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 137
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 412
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 206
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 103
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 310
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 155
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 466
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 233
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 700
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 350
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 175
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 526
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 263
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 790
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 395
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1186
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 593
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1780
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 890
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 445
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1336
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 668
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 334
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 167
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 502
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 251
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 754
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 377
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1132
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 566
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 283
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 850
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 425
Original number was 9384
Calculated number was 1276
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 638
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 319
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 958
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 479
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1438
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 719
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 2158
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1079
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 3238
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1619
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 4858
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 2429
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 7288
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 3644
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1822
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 911
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 2734
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1367
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 4102
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 2051
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 6154
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 3077
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 9232
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 4616
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 2308
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1154
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 577
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1732
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 866
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 433
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1300
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 650
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 325
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 976
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 488
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 244
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 122
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 61
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 184
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 92
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 46
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 23
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 70
--- Elapsed Time is: 0.000000 
 
Original number was 9384
--- Elapsed Time is: 0.000000 
 
Calculated number was 35
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 106
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 53
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 160
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 80
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 40
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 20
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 10
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 5
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 16
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 8
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 4
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 2
--- Elapsed Time is: 0.000000 
 
Original number was 9384
Calculated number was 1

9384 -> 1 = 122 steps 
 
--- Elapsed Time is: 0.000000 
 
Successfully putting number to msg queue 
 
--- Elapsed Time is: 1.000000 
 
Putting message (id: 1, value: 887 ) to message queue 
 
Index: 1 
 
Original number: 887 
 
Calculated number: 887 
 
Steps number: 0 
 
Original number was 887
Calculated number was 887
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 2662
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 1331
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 3994
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 1997
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 5992
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 2996
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 1498
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 749
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 2248
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 1124
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 562
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 281
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 844
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 422
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 211
Original number was 887
Calculated number was 634
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 317
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 952
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 476
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 238
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 119
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 358
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 179
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 538
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 269
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 808
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 404
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 202
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 101
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 304
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 152
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 76
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 38
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 19
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 58
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 29
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 88
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 44
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 22
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 11
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 34
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 17
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 52
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 26
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 13
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 40
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 20
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 10
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 5
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 16
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 8
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 4
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 2
--- Elapsed Time is: 1.000000 
 
Original number was 887
Calculated number was 1

887 -> 1 = 54 steps 
 
--- Elapsed Time is: 1.000000 
 
--- Elapsed Time is: 1.000000 
 
Successfully putting number to msg queue 
 
Done putting number in msg queue 
 
Producer thread is joined! 
 
Thread 1 cancelled 
 
Thread 2 cancelled 
 
Consumer thread 1 is joined! 
 
Consumer thread 2 is joined! 
 
Message queue closed! 
```
