#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include <iostream>

class Zombie
{
public:

	const std::string	getName( void );
	void				setName( std::string name );

	Zombie( void );
	Zombie( std::string name);
	~Zombie( void );

	void	announce( void );

private:

	std::string	name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
