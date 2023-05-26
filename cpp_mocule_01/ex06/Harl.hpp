#pragma once

#include <iostream>
#include <string>

enum	e_complainType
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
public:

	Harl( void );
	~Harl( void );

	void	complain( std::string level );

private:
	
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};