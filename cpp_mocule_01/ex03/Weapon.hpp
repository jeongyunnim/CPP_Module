#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <string>

class Weapon
{

public:

	const std::string	getType( void );
	void				setType( std::string newType );
	
	Weapon( void );
	Weapon( std::string newType );
	~Weapon(void);

private:

	std::string	type;

};

#endif