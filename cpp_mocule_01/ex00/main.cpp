#include "Zombie.hpp"

int main()
{
	Zombie	*heapZombie;
	Zombie	stackZombie("stackZombie");

	heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;
	stackZombie.announce();
}