/*
* File: LabProblem4_1.cpp
* 
* Author: Ethan Burch
* Date: 10/26/23
* Description: Initialize array with 4 digit random numbers
*/

#include <iostream>
#include <ctime>
using namespace std;



int main(void) {
	const int HIGHEST_VALUE = 9999;
	const int LOWEST_VALUE = 1000;
	const int NUMBER_OF_INTEGERS = 10;
	int numbers[NUMBER_OF_INTEGERS];

	srand((unsigned)time(0)); // seed RNG

	cout << "The random integers:\t";
	for (int i = 0; i < NUMBER_OF_INTEGERS; i++) {
		numbers[i] = rand() % (HIGHEST_VALUE - LOWEST_VALUE + 1) + LOWEST_VALUE; // get random 4 digit number
		cout << numbers[i] << '\t';
	}

	

	return 0;
}