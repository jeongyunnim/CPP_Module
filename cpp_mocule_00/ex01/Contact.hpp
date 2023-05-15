#pragma once
#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		Contact(const Contact& other);
		//할당 생성자

		void				add(void);
		const std::string	getFirstName(void);
		const std::string	getLastName(void);
		const std::string	getNickName(void);
		const std::string	getDarkestSecret(void);
		void				printTenLetter(std::string);
		void				setFirstName(void);
		void				setLastName(void);
		void				setNickName(void);
		void				setDarkestSecret(void);
	private:
		std::string firstName;
		std::string lastName;
		std::string	nickName;
		std::string	darkestSecret;
};