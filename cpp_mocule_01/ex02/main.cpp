#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	std::string message;
	std::string *stringPtr;
	std::string& stringRef = message;

	message = "HI THIS IS BRAIN";
	stringPtr = &message;
	std::cout << "[MEMORY ADDRESS]" << std::endl;
	std::cout << std::setw(80) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' '); // setfill 초기화 필요함.
	std::cout << std::setw(25) << "string|: " << &message << std::endl;
	std::cout << std::setw(25) << "string pointer|: " << &stringPtr << std::endl;
	std::cout << std::setw(25) << "string reference|: " << &stringRef << std::endl;
	std::cout << "\n\n" << std::endl;
	std::cout << "[VALUE]" << std::endl;
	std::cout << std::setw(80) << std::setfill('-') << "" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << std::setw(25) << "string|: " << message << std::endl;
	std::cout << std::setw(25) << "string pointer|: " << stringPtr << std::endl;
	std::cout << std::setw(25) << "string reference|: " << stringRef << std::endl;
}