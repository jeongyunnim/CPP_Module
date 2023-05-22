#include "HumanA.hpp"

const Weapon	HumanA::getWeapon( void )
{
	return (weapon);
}

const std::string	HumanA::getName( void )
{
	return (name);
}

void    HumanA::setWeapon( Weapon& newWeapon )
{
	weapon = newWeapon;
}

void	HumanA::setName( std::string& newName )
{
	name = newName;
}

HumanA::HumanA(std::string newName, Weapon& newWeapon)
	:	weapon(newWeapon)
{
	setName(newName);
}

HumanA::~HumanA(void)
{
}

void    HumanA::attack( void )
{
	std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}
