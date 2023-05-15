#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	:	maxSize(8)
{
	std::cout << "Welcome to PhoneBook Ver 1.0" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "See you again." << std::endl;
}

void	PhoneBook::interactionMode(std::string command)
{
	int	i;

	while (1)
	{
		if (command.size() != 1)
		{
			std::cout << "Invalid input\n[Usage] A: Add, S: Search, E: Exit" << std::endl;
		}
		else if (command[0] == 'A')
		{
			contact[count].add();
		}
		else if (command[0] == 'S')
		{
			search();
		}
		else if (command[0] == 'E')
		{
			return ;
		}
		else
		{
			std::cout << "Invalid input\n[Usage] A: Add, S: Search, E: Exit" << std::endl;
		}	
	}
}

void	PhoneBook::search(void)
{
	int	i;

	i = 0;
	while (i < count)
	{
		std::cout << contact[i].firstName << std::endl;
	}
}
