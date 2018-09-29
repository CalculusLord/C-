/*
 * File: division.cpp
 * Author: Nate Reynolds
 * ---------------------
 *  This program takes in two numbers,
 *  divides them,and returns an exact
 *  result
 */

#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	double
		first_number,
		second_number,
		quotient;
	cout << "This program takes in two numbers\n";
	cout << "and divides them, returning an exact result\n";
	cout << "Please enter two numbers seperated by a space: ";
	cin  >> first_number >> second_number;

	quotient = first_number / second_number;
	cout << first_number << " / " << second_number << " = " << quotient << endl;

	return 0;
}
