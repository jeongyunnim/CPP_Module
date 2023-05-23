#include "controlFile.hpp"

int	main(int argc, char *argv[])
{
	std::string		contents;

	if (argc != 4)
	{
		std::cerr << "Error\nArgument count error" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cerr << "Error\nEmpty string error" << std::endl;
		return (1);
	}
	contents = getFileContents(argv[1]);
	if (contents.empty())
		return (1);
	if (replaceToNewFile(contents, argv[1], argv[2], argv[3]) == ERROR)
		return (1);
	return (0);
}
