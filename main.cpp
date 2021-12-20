/*
 * main.cpp
 * 
 * CS 160 Class Project
 * by Ziqi Xu, 11/19/2021
 * 
 * Purpose:
 *      This program will accept inputs of arrays of integers both directly 
 *      from the users and from files, find the longest increasing 
 *      subsequence of the input array using two different algorithms,
 *      and compare their runtime.
 *
 */

#include <iostream>
#include <vector>

#include "FindLIS.h"

int main(int argc, char *argv[])
{
    // check the arguments 
    if (argc < 1 or argc > 2) {
        std::cerr << "Usage: ./FindLIS [inputFile]" << std::endl;
    }

    // run the program
    FindLIS find_lis;

    if (argc == 1) {
        find_lis.run();
    } 
    else {
        find_lis.run(argv[1]);
    }

    return 0;
}
