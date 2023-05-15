#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	:	maxSize(8)
	,	count(0)
{
	std::cout << "Welcome to PhoneBook Ver 1.0" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "See you again." << std::endl;
}

void	PhoneBook::interactionMode(void)
{
	std::string command;
	int		i;

	std::cout << "\n[Usage]\n\n1.ADD: save a new contact.\n2.SEARCH: display a specific contact.\n3.EXIT: exit \n\n";
	while (1)
	{
		std::cout << "COMMAND: "; 
		std::getline(std::cin, command);
		if (std::cin.fail())
		{
			std::cout << "\nStandard input was failed" << std::endl;
			return ;
		}
		if (command == "ADD")
		{
			contact[count].add();
			count++;
		}
		else if (command == "SEARCH")
		{
			search();
		}
		else if (command == "EXIT")
		{
			return ;
		}
	}
}

void	PhoneBook::search(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < count)
	{
		c = '0' + i;
		std::cout << std::setw(10) << std::right << c << "|";
		std::cout << std::setw(10) << std::right << contact[i].getFirstName() << "|";
		std::cout << std::setw(10) << std::right << contact[i].getLastName() << "|";
		std::cout << std::setw(10) << std::right << contact[i].getNickName() << "." << std::endl;
		i++;
	}
}
