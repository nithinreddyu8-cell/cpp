// This program doesn't work
#include <iostream>

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;
	std::cout<<input*2<<'\n';
}

int main()
{
	getValueFromUser(); // Ask user for input

	int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?

	std::cout <<num<< '\n';

	return 0;
}