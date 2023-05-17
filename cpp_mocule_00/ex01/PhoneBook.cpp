#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
	:	maxSize(8)
	,	count(0)
{
	std::cout << "Welcome to PhoneBook Ver 1.0.0" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "See you again." << std::endl;
}

void	PhoneBook::interactionMode(void)
{
	std::string command;
	int		i;

	std::cout << "\n[Usage]\n\n1.ADD: save a new contact.\n2.SEARCH: display a specific contact.\n3.EXIT: exit program.\n4.MAN: show the manual.\n\n";
	while (1)
	{
		std::cout << "COMMAND: "; 
		std::getline(std::cin, command);
		if (command == "ADD" || command == "1")
		{
			if (count == 8)
				contactOverflow();
			else
			{
				contact[count].add();
				count++;
			}
		}
		else if (command == "SEARCH" || command == "2")
			search();
		else if (command == "EXIT" || command == "3")
			return ;
		else if (command == "MAN" || command == "4")
			std::cout << "\n[Usage]\n\n1.ADD: save a new contact.\n2.SEARCH: display a specific contact.\n3.EXIT: exit program.\n4.MAN: show the manual.\n\n";
		else
			std::cout << "\nError: Invalid input" << std::endl;
		if (std::cin.eof())
		{
			std::cerr << "\nError: console input was closed" << std::endl;
			return ;
		}
		else if (std::cin.fail())
		{
			std::cerr << "\nError: console input was failed" << std::endl;
			return ;
		}
	}
}

const int	PhoneBook::getCount(void)
{
	return (count);
}



void	PhoneBook::search(void)
{
	std::string message;
	int			i;
	char		c;

	if (getCount() == 0)
	{
		std::cout << "* List is empty *" << std::endl;
		return ;
	}
	std::cout << "============================================" << std::endl;
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
	std::cout << "============================================" << std::endl;
	/* 다른 함수로 나누어서 작성하고 싶은데, OOP의 개념과 맞는 것인지 잘 모르겠다.*/
	std::string index;

	while (1)
	{
		std::cout << "Please enter Contract's index: ";
		std::getline(std::cin, index);
		if (std::cin.fail() || std::cin.eof())
			return ;
		if (index.size() != 1 || index[0] < '0' || '8' < index[0])
		{
			std::cout << "Invalid input" << std::endl;
			return ;
		}
		std::cout << std::setw(20) << "First name: " << contact[index[i] - '0'].getFirstName() << std::endl;
		std::cout << std::setw(20) << "Last name: " << contact[index[i] - '0'].getLastName() << std::endl;
		std::cout << std::setw(20) << "Nickname: " << contact[index[i] - '0'].getNickname() << std::endl;
		std::cout << std::setw(20) << "Darkest secret: " << contact[index[i] - '0'].getDarkestSecret() << std::endl;
	}
}

void	PhoneBook::contactOverflow(void)
{
	int	i;

	i = 0;
	while (i < 7)
	{
		contact[i] = contact[i + 1];
		i++;
	}
	contact[i].add();
}