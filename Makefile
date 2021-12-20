#
# Makefile for Finding_LIS
#
# CS 160 Class Project 
#
# by Ziqi Xu, 11/19/2021

CXX  = clang++
CXXFLAGS = -g3 -Wall -Wextra -std=c++11
INCLUDES = $(shell echo *.h)

# Build the rule for running the program
FindLIS: main.o FindLIS.o
	${CXX} -o $@ $^

%.o: %.cpp ${INCLUDES}
	${CXX} ${CXXFLAGS} -c $<

clean:
	rm -rf FindLIS *.o *.dsYM

