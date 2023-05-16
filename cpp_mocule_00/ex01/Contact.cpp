#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::add(void)
{
	setFirstName();
	setLastName();
	setNickName();
	setDarkestSecret();
	std::cout << "Successfully added" << std::endl;
}

const std::string	Contact::getFirstName(void)
{
	return (firstName);
}

const std::string	Contact::getLastName(void)
{
	return (lastName);	
}

const std::string	Contact::getNickName(void)
{
	return (nickName);	
}

const std::string	Contact::getDarkestSecret(void)
{
	return (darkestSecret);	
}

void Contact::setFirstName()
{
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	// std::cin >> firstName;
	if (std::cin.fail())
	{
		std::cout << "\nconsole input was failed" << std::endl;
		return ;
	}
}

void Contact::setLastName()
{
	std::cout << "Last name: ";
	std::getline(std::cin, firstName);
	if (std::cin.fail())
	{
		std::cout << "\nconsole input was failed" << std::endl;
		return ;
	}
}

void Contact::setNickName()
{
	std::cout << "Nickname: ";
	std::getline(std::cin, firstName);
	if (std::cin.fail())
	{
		std::cout << "\nconsole input was failed" << std::endl;
		return ;
	}
	if (nickName.size() == 0)
		std::cout << "invalid input" << std::endl;
}

void Contact::setDarkestSecret()
{
	std::cout << "Darkest secret: ";
	std::getline(std::cin, firstName);
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
	else if (c == 'N')
	{
		if (nickName.size() < 10)
			message = nickName;
		else
			message = nickName.substr(0, 9) + '.';
	}
	return (message);
}
