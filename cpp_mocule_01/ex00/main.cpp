#include "Zombie.hpp"

int main()
{
	Zombie	*heapZombie;
	Zombie	stackZombie("stackZombie");

	heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;
	// heapZombie->announce(); -> 이 함수를 announce에서 막을 수 있을까?
	stackZombie.announce();
}