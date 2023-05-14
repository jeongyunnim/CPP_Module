#pragma once
#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		//복사 생성자
		//할당 생성자
	private:
		std::string firstName;
		std::string lastName;
		std::string	nickName;
		std::string	darkestSecret;
};