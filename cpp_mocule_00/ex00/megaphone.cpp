//왜 헤더파일은 생성하지 않는가?

#include <iostream>
#include <string>

int main(void)
{
	std::string sentence;
	int			i;

	i = 0;
	while (i < sentence.size())
	{
		if ('a' <= sentence[i] && sentence[i] <= 'z')
			sentence[i] |= 0x01 << 5;
		i++;
	}
	return (0);
}