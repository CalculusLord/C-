#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int 
		first_argument,
		second_argument;

	cout << "Enter a first argument: ";
	cin >> first_argument;

	cout << "Enter a second argument: ";
	cin >> second_argument;

	cout << first_argument << " * " << second_argument << " = " << first_argument * second_argument << endl;
	cout << first_argument << " + " << second_argument << " = " << first_argument + second_argument << endl;
	cout << first_argument << " / " << second_argument << " = " << first_argument / second_argument << endl;
	cout << first_argument << " - " << second_argument << " = " << first_argument - second_argument << endl;
	return 0;
}
