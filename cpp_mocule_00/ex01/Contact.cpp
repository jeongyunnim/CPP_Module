#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::add(void)
{
	if (std::cin.fail() == 0)
		setFirstName();
	if (std::cin.fail() == 0)
		setLastName();
	if (std::cin.fail() == 0)
		setNickname();
	if (std::cin.fail() == 0)
		setDarkestSecret();
	if (std::cin.fail() == 0)
		std::cout << "[PhoneBook v1.0.0]Successfully Added" << std::endl;
}

const std::string	Contact::getFirstName(void)
{
	return (firstName);
}

const std::string	Contact::getLastName(void)
{
	return (lastName);	
}

const std::string	Contact::getNickname(void)
{
	return (nickname);	
}

const std::string	Contact::getDarkestSecret(void)
{
	return (darkestSecret);	
}

void Contact::setFirstName()
{
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	if (std::cin.fail() || std::cin.eof())
		return ;
}

void Contact::setLastName()
{
	std::cout << "Last name: ";
	std::getline(std::cin, lastName);
	if (std::cin.fail() || std::cin.eof())
		return ;
}

void Contact::setNickname()
{
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	if (std::cin.fail() || std::cin.eof())
		return ;
}

void Contact::setDarkestSecret()
{
	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestSecret);
	if (std::cin.fail() || std::cin.eof())
		return ;
}

const std::string Contact::getSimpleForm(std::string& message, char c)
{
	if (c == 'f')
	{
		if (firstName.size() < 10)
			message = firstName;
		else
			message = firstName.substr(0, 9) + '.';
	}
	else if (c == 'l')
	{
		if (lastName.size() < 10)
			message = lastName;
		else
			message = lastName.substr(0, 9) + '.';
	}
	else if (c == 'n')
	{
		if (nickname.size() < 10)
			message = nickname;
		else
			message = nickname.substr(0, 9) + '.';
	}
	return (message);
}
