/* 
 * FindLIS.h
 *
 * CS 160 Class Project
 * by Ziqi Xu, 11/21/2021
 * 
 * The FindLIS class can accept inputs of an array of integers both 
 * directly from std::cin and from a file and find the longest increasing 
 * subsequence of the array using two different algorithms. It can 
 * also calculate the runtime associated with each algorithm.
 *
 */

#ifndef _FindLIS_
#define _FindLIS_

#include <iostream>
#include <vector>
#include <stack>
#include <chrono>

class FindLIS {
public:

    // constructor
    FindLIS();
    // destructor
    ~FindLIS();

    // start the program
    void run();
    void run(std::string filename);

private: 
    std::size_t array_size;

    std::vector<int> input_array;

    std::vector<int> dp_auxiliary;  // stores the legnth of longest increasing
                                    // subsequence that ends at current index
    std::vector<int> dp_previous;   // stores the "previous pointer" 
                                    // of each element
    std::stack<int> dp_index_stack; // stores the indices of elements in LIS
    std::vector<int> dp_lis;        // stores the LIS we find using dp
    std::chrono::microseconds dp_duration;

    std::vector<int> opt_aux_value;  // stores the values of the smallest last
                                     // element of a LIS of length i
    std::vector<int> opt_aux_index;  // stores the indices of the smallest last
                                     // element of a LIS of length i
    std::vector<int> opt_previous;   // stores the "previous pointer" of 
                                     // each element
    std::stack<int> opt_index_stack; // stores the indices of elements in LIS
    std::vector<int> opt_lis;        // stores the LIS we find using 
                                     // the optimal method
    std::chrono::microseconds opt_duration;

    // take inputs
    void take_usr_input();
    void take_file_input(std::string filename);
    bool got_int(std::string s, int* resultup);

    // output the given vector
    void print_array(std::string array_name, const std::vector<int> &output_array);

    // file helper functions
    void open_or_exit(std::ifstream &input_stream, std::string filename);
    void abort(std::string prompt);

    // algorithm 1 (dp)
    void find_lis_dp();
    void dp_populate_memos(int index);
    void find_lis_dp_helper();

    // algorithm 2 (opt)
    void find_lis_optimal();
    void opt_populate_memos(int index);
    int  binary_search_position(int value, const std::vector<int> & array,
                                int low, int high);
    void find_lis_optimal_helper();
    int find_lis_end_index();

    // compare the two algorithms
    void diff_lis_size();
    void diff_runtime();

};



#endif //_FindLIS_
