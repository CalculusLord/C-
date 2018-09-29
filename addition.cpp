/*
 * File: addition.cpp
 * Author: Nate Reynolds
 * ---------------------
 *  This program takes two numbers and adds them together
 */

#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int
		first_number,
		second_number,
		sum;
	cout << "This program takes two numbers\n";
	cout << "and adds them together.\n";
	cout << "Please enter a number: ";
	cin  >> first_number;
	cout << "Please enter a second number: ";
	cin  >> second_number;

	sum = first_number + second_number;
	cout << sum << " is the sum of the two numbers.\n";

	return 0;
}
