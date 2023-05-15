#pragma once
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		interactionMode(void);
		void		search(void);
	private:
		Contact		contact[8];
		int			count;
		const int	maxSize;
};