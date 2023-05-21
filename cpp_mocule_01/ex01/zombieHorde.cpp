#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie		*zombies;
	std::string	zombieName;
	if (N == 0)
		return (NULL);
	else if (N < 0)
	{
		std::cerr << "Error\nInvalid input\n" << std::endl;
		return (NULL);
	}
	else
	{
		zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			zombieName.clear();
			zombieName = name;
			if (i == 0)
				zombieName += " Lord";
			else
				zombieName += i + '0';
			zombies[i].setName(zombieName);
		}
		return (zombies);
	}
}
