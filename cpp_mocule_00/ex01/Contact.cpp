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
	std::cin >> firstName;
	if (firstName.size() == 0)
		std::cout << "invalid input" << std::endl;
}

void Contact::setLastName()
{
	std::cout << "Last name: ";
	std::cin >> lastName;
	if (lastName.size() == 0)
		std::cout << "invalid input" << std::endl;
}

void Contact::setNickName()
{

	std::cout << "Nickname: ";
	std::cin >> nickName;
	if (nickName.size() == 0)
		std::cout << "invalid input" << std::endl;
}

void Contact::setDarkestSecret()
{
	std::cout << "Darkest secret: ";
	std::cin >> darkestSecret;
}