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

void outputEven(int array[], int size);
void ouputEvenIndices(int array[], int size);
void reverseOrder(int array[], int size);
void firstLast(int array[], int size);


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
	ouputEvenIndices(numbers, NUMBER_OF_INTEGERS);
	outputEven(numbers, NUMBER_OF_INTEGERS);
	reverseOrder(numbers, NUMBER_OF_INTEGERS);
	firstLast(numbers, NUMBER_OF_INTEGERS);
	return 0;
}

void firstLast(int array[], int size) {
	cout << "\nFirst and Last:\t\t";

	for (int i = 0; i < size; i++) {
		if (i == 0) {
			cout << array[i] << '\t';
		}
		else if (i == size - 1) {
			cout << array[i] << '\t';
		}
	}
}

void reverseOrder(int array[], int size) {
	cout << "\nReversed order:\t\t";

	for (int i = size - 1; i >= 0; i--) {
		cout << array[i] << '\t';
	}
}


void ouputEvenIndices(int array[], int size) {
	cout << "\nEven indices:\t\t";

	for (int i = 0; i < size; i++) {
		if (i % 2) {
			continue;
		}
		else {
			cout << array[i] << '\t';
		}
	}
}

void outputEven(int array[], int size) {
	cout << "\nEven values:\t\t";
	for (int i = 0; i < size; i++) {
		if (array[i] % 2) {
			continue;
		}
		else {
			cout << array[i] << '\t';
		}
	}
}