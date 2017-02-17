//Example from the book C++ Primer Plus
//Page 86 escape sequences
#include <iostream>

int main()
{
	std::cout << "\aOperation \"HyperHype\" is now activated!\n";
	std::cout << "Enter your agent code: _________\b\b\b\b\b\b\b\b\b";
	long code;
	std::cin >> code;
	std::cout << "\aYou Entered " << code << "...\n";
	std::cout << "\aCode Verified! Proceed wih Plan Z3!\n";
	return 0;
}