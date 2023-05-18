#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
public:

	const int	getCount(void);

	PhoneBook();
	~PhoneBook();
	
	void		interactionMode(void);
	void		contactOverflow(void);
	void		search(void);

private:

	Contact		contact[8];
	int			count;
	const int	maxSize;

};

#endif