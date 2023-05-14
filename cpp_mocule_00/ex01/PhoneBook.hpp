#pragma once
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		interactionMode(std::string command);
		void		add(void);
		void		search(void);
		void		exit(void);
	private:
		Contact		contact[8];
		const int	maxSize;
};