#include "HumanB.hpp"

const Weapon	*HumanB::getWeapon( void )
{
	return (weapon);
}

const std::string	HumanB::getName( void )
{
	return (name);
}

void    HumanB::setWeapon( Weapon &newWeapon )
{
	weapon = &newWeapon;
}

void	HumanB::setName( std::string& newName )
{
	name = newName;
}

HumanB::HumanB(void)
	:	weapon(NULL)
	,	name("* NONE *")
{
}


HumanB::HumanB(std::string newName)
{
	setName(newName);
}

HumanB::~HumanB(void)
{
}

void    HumanB::attack( void )
{
	if (weapon == NULL)
	{
		std::cerr << "Error\nIs there NO weapon" << std::endl;
		return ;
	}
	std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}
