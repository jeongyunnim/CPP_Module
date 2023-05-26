#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::complain( std::string level )
{
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*complainType[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i;

	if (level.size() == 0)
		return ;
	for (i = 0; i < 4; i++)
	{
		if (level == arr[i])
		{
			break ;
		}
	}
	switch (i)
	{
		case 0:
			(this->*complainType[DEBUG])();
		case 1:
			(this->*complainType[INFO])();
		case 2:
			(this->*complainType[WARNING])();
		case 3:
			(this->*complainType[ERROR])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}