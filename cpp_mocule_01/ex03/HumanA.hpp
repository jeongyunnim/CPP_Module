#pragma once
#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

public:

	const Weapon		getWeapon( void );
	const std::string	getName( void );
	void				setWeapon( Weapon& newWeapon );
	void				setName( std::string& newName );

	HumanA(std::string newName, Weapon& newWeapon);
	~HumanA(void);

	void    attack( void );

private:

	Weapon&		weapon;
	std::string	name;
	
};

#endif