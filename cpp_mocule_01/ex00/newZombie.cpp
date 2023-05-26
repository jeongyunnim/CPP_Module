#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	// 할당 실패를 어떻게 함...??
	return (zombie);
}
