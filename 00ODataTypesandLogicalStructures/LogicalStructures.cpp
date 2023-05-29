#include <iostream>
#include "LogicalStructures.h"

// if - else statement:
void checkNumber(int num) {
	if (num > 0) {
		std::cout << "The number is positive." << std::endl;
	}
	else if (num < 0) {
		std::cout << "The number is negative." << std::endl;
	}
	else {
		std::cout << "The number is zero." << std::endl;
	}
}

// for loop:
void countUpTo(int limit) {
	for (int i = 1; i <= limit; i++) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

// while loop:
void countdownFrom(int start) {
	while (start >= 0) {
		std::cout << start << " ";
		start--;
	}
	std::cout << std::endl;
}

// do - while loop:
void printNumbers(int count) {
	int i = 1;
	do {
		std::cout << i << " ";
		i++;
	} while (i <= count);
	std::cout << std::endl;
}

// switch statement:
void processGrade(char grade) {
	switch (grade) {
	case 'A':
		std::cout << "Excellent!" << std::endl;
		break;
	case 'B':
		std::cout << "Good job!" << std::endl;
		break;
	case 'C':
		std::cout << "Passing grade." << std::endl;
		break;
	case 'D':
		std::cout << "Barely passing." << std::endl;
		break;
	case 'F':
		std::cout << "Failed." << std::endl;
		break;
	default:
		std::cout << "Invalid grade." << std::endl;
		break;
	}
}

// break statements(used within loops) :
void breakExample() {
	for (int i = 1; i <= 10; i++) {
		if (i == 5) {
			break; // Exit the loop when i is 5
		}
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

// continue statements(used within loops) :
void continueExample() {
	for (int i = 1; i <= 5; i++) {
		if (i == 3) {
			continue; // Skip iteration when i is 3
		}
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

// ternary 
int ternaryExample(int number) {
	
	// "ternary operator" because it takes three operands.
	//  is sometimes referred to as the "conditional operator"
	std::string result = (number % 2 == 0) ? "Even" : "Odd";

	std::cout << "The number is " << result << std::endl;

	return 0;
}
