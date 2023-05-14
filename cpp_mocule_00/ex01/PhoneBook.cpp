#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	:	maxSize(8)
{
	std::cout << "Welcome to PhoneBook Ver 1.0" << std::endl;
}

PhoneBook::~PhoneBook()
{
}

void	interactionMode(std::string command)
{
	if (command.size() != 1)
	{
		std::cout << "[Invalid input] Usage: 'A' for Add 'S' for Search 'E' for Exit" << std::endl;
	}
	else if (command[0] == 'A')
		// hpp의 함수를 불러오려면 어떻게 해야하는가? PhoneBook 클래스가 가진 Contact 배열을 수정하고 싶다.
	else if (command[0] == 'S')
		// search
	else if (command[0] == 'E')
		// exit
	else
	{
		std::cout << "[Invalid input] Usage: 'A' for Add 'S' for Search 'E' for Exit" << std::endl;
	}	
}