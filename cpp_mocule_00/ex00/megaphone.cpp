//왜 헤더파일은 생성하지 않는가?

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string sentence;
	int			i;
	char		printChar;

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
	i = 0;
	while (i < sentence.size())
	{
		printChar = sentence[i];
		if ('a' <= sentence[i] && sentence[i] <= 'b')
			printChar &= ~(0x01 << 5);
		std::cout << printChar;
		i++;
	}
	std::cout << std::endl;
	return (0);
}