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
		// std::cin >> command;
		if (std::cin.fail())
		{
			std::cout << "\nconsole-in was failed" << std::endl;
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
		else
		{
			std::cout << "\nInvalid input" << std::endl;
		}
	}
}

void	PhoneBook::search(void)
{
	std::string message;
	int			i;
	char		c;

	i = 0;
	while (i < count)
	{
		c = '0' + i;
		std::cout << std::setw(10) << std::right << c << "|";
		contact[i].getSimpleForm(message, 'f');
		std::cout << std::setw(10) << std::right << message << "|";
		contact[i].getSimpleForm(message, 'l');
		std::cout << std::setw(10) << std::right << message << "|";
		contact[i].getSimpleForm(message, 'n');
		std::cout << std::setw(10) << std::right << message << std::endl;
		i++;
	}
}
