//왜 헤더파일은 생성하지 않는가?

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string	sentence;
	int			i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		sentence += argv[i];
		i++;
	}
	for (std::string::iterator it = sentence.begin(); it != sentence.end(); it++)
	{
		std::cout << static_cast<char>(std::toupper(*it));
	}
	std::cout << std::endl;
	return 0;
}