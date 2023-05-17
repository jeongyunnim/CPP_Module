#pragma once
#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		interactionMode(void);
		void		search(void);
		const int	getCount(void);
		void		contactOverflow(void);
	private:
		Contact		contact[8];
		int			count;
		const int	maxSize;
};