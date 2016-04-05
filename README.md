# lab3
This is README.

How to compile:
	make
sort() will choose the fastest way to sort
sort() sorting time is ONLogN, insertion sort is N^2
in case 1000000, 1000000log1000000 is 6000000, but 100000^2 is 1e+12
so insertion sort need more time than sort()

Case 1000000:
sort(): 0.313 seconds
v1/v2 are different.
insertion_sort(): 5476.34 seconds
v1/v2 are the same.

Case 100000:
sort(): 0.031 seconds
v1/v2 are different.
insertion_sort(): 68.594 seconds
v1/v2 are the same.

Case 10000:
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.703 seconds
v1/v2 are the same.

Case 1000:
sort(): 0 seconds
v1/v2 are different.
insertion_sort(): 0.015 seconds
v1/v2 are the same.
