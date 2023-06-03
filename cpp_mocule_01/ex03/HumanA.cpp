#include "HumanA.hpp"

Weapon	HumanA::getWeapon( void ) const
{
	return (weapon);
}

std::string	HumanA::getName( void ) const
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
	,	name(newName)
{
}

HumanA::~HumanA(void)
{
}

void    HumanA::attack( void )
{
	std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}
