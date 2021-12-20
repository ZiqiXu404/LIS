***********************************************************
* Class Project: Longest Increasing Subsequence           *
* CS 160                                                  *
* README                                                  *
* Written by Ziqi Xu, 11/21/2021                          *
***********************************************************

---Purpose of the Program---
This program takes an array of integers as inputs and finds the 
longest increasing subsequence (LIS) in the array using 2 different
approaches: conventional dynamic programming approach, and an optimal
runtime approach (which was taught in lecture). At the end it compares
the runtimes of using the two methods.


---Compile and Run---
    Compile using
          make FindLIS
    Run excutable with
          ./FindLIS [input_file]
    
    * Note: without an input_file the program will automatically prompt
            the user to input an array of integers
    * Note: an input file should contain an array of integers seperated
            by space (or a 'enter' on the keyboard)


---Acknowledgements---
* I refer to https://stackoverflow.com/questions/8690567/setting-an-int-
*to-infinity-in-c to learn how to initialize a finitely large number.
* I used the random array generator https://www.random.org/integer-sets/ 
to generate input files for my program.
* I refer to https://www.geeksforgeeks.org/measure-execution-time-function-cpp/ 
to learn how to measure the runtime of a function.
* TA Peak Limpiti helped me clarify a few questions about comparing the 
runtimes of using two algorithms.


---Files---
FindLIS.h
    The FindLIS class can accept inputs of an array of integers both 
    directly from std::cin and from a file and find the longest increasing 
    subsequence of the array using two different algorithms. It can 
    also calculate the runtime associated with each algorithm.

FindLIS.cpp
    Find the longest increasing subsequence of the input array using
    two different algorithms and calculate the runtime.

main.cpp
    Start the program, determine the way to accept inputs, and use a 
    FindLIS instance to run the algorithms.

input_file[0-22].txt
    Input test files which include different sizes of arrays, arrays
    of different orders (sorted, reversely sorted, random), and arrays
    that contain some non-valid inputs.

Makefile
    Make rules to compile the program.

README (this file)
    Describe the program in general.


---Building the Code---
* I first created the 3 files main.cpp, FindLIS.h, and FindLIS.cpp and 
wrote the basic structures to connect them. 
* Then I built the FindLIS class by first writing out the constructor and
nullary destructor and then implementing the public function run() as the 
enter point of the program. 
* From there, I first implemented the input taking module which allow
2 ways of inputs (directly from std::cin and from a file), and then 
implemented the 2 algorithms to find the LIS from the input. 
* Lastly I completed the runtime comparision functions and the function to
compare the sizes of LIS's produced by two algorithms.


---Testing---
* I tested as I built the code by frequently printing important computed 
values and some other statements to check the connection between different
modules.
* I created 22 input files for testing, which include different sizes of 
integer arrays, arrays of different orders (sorted, reversely sorted, random), 
and arrays that contain some non-valid inputs (such as letters).


---Analysis & Conclusion---
* In theory, the conventional DP approach takes O(n^2) time because for every
element in the array, it has to go through all the elements that come
before it to calculate the length of longest increasing subsequence that ends
with itself. On the other hand, the optimal approach only takes O(nlogn) 
time because it uses a different kind of "memo" and it uses binary search 
to handle the 'memo' for each element in the array.
* For each of the 22 input arrays from my input files, the two algorithms can 
both accurately report 1 instance of LIS's with consistent lengths. The LIS's
they found may not be the same since there can be more than 1 instance of 
the LIS's. 
* In general, over the 22 input arrays I created, the optimal approach
takes less time than the conventional dp approach on average regardless of 
the size of the input arrays (my input array sizes vary from 0 to 5000) 
or if the arrays are in sorted order or reversely sorted order.
And their runtime difference grows larger when the input size becomes larger.
However, for the input arrays of really small sizes (e.g. size of 3), it is 
more likely that they produce a tie in their runtime, and sometimes the 
conventional dp approach even takes less time than the optimal approach.


---My Learning Takeaways---
* I now have a firm understanding on the two algorithms especially in
terms of how do I handle the memoization in practice.
* I refreshed my knowledge on binary search when implementing the optimal
algorithm.
* I learned a new c++ built-in function to record the runtime of certain 
parts of the codes using std::chrono library.
* I refreshed my knowledge on how to handle the input abnormal and edge cases.


---Time Spent---
13 hours

