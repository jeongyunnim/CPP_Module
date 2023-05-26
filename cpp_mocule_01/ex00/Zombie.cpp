#include "Zombie.hpp"

Zombie::Zombie(void)
	: name("* NONE *")
{
}

Zombie::Zombie( std::string zombieName )
{
	setName(zombieName); // 초기화 리스트 사용하는 것이 좋을듯
}

Zombie::~Zombie(void)
{
	std::cout << "Named \"" << getName() << "\" Zombie is gone. Good bye." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string zombieName )
{
	name.clear();
	name = zombieName;
}

const std::string	Zombie::getName( void )
{
	return (name);
}