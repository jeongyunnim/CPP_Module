#include "Zombie.hpp"

int main()
{
	Zombie	*summonZombies;
	int		number;

	number = 10;
	summonZombies = zombieHorde(number, "mini");
	for (int i = 0; i < number; i++)
		summonZombies[i].announce();
	delete[] summonZombies;
}