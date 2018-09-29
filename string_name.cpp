#include <iostream>

using namespace std;

int main (int argc, char const *argv[])
{
	string
		user_name;
	
	cout << "Please enter your name: ";
	cin	>> user_name;
	cout << "Hi " << user_name << "\n";
	return 0;
}