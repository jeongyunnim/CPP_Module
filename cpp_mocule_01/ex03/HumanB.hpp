#pragma once
#ifndef __HUMAN_B_H__
#define __HUMAN_B_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{

public:

	Weapon		*getWeapon( void ) const;
	std::string	getName( void ) const;
	void				setWeapon( Weapon &newWeapon );
	void				setName( std::string& newName );

	HumanB(void);
	HumanB(std::string newName);
	~HumanB(void);

	void    attack( void );

private:

	Weapon		*weapon;
	std::string	name;

};

#endif