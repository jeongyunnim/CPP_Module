#pragma once
#include <iostream>
#include <string>
#define ERROR -1

class Contact
{
	public:
		Contact();
		~Contact();
		Contact(const Contact& other);
		//할당 생성자

		const std::string	getFirstName(void);
		const std::string	getLastName(void);
		const std::string	getNickname(void);
		const std::string	getDarkestSecret(void);
		const std::string	getSimpleForm(std::string& message, char c);
		void				setFirstName(void);
		void				setLastName(void);
		void				setNickname(void);
		void				setDarkestSecret(void);
		void				add(void);
	private:
		std::string firstName;
		std::string lastName;
		std::string	nickname;
		std::string	darkestSecret;
};
