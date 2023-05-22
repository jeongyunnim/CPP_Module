#include "Weapon.hpp"

const std::string	Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType( std::string newType )
{
	type.clear();
	if (newType.empty())
	{
		std::cerr << "Erro\nType string is empty" << std::endl;
		return ;
	}
	type = newType;
}

Weapon::Weapon( void )
{
	setType( "* NONE *");
}

Weapon::Weapon( std::string newType )
{
	setType(newType);
}

Weapon::~Weapon(void)
{
}