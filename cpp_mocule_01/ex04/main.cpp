#include "controlFile.hpp"

int	main(int argc, char *argv[])
{
	std::string		contents;

	if (argc != 4)
	{
		std::cerr << "Error\nArgument count error" << std::endl;
		return (1);
	}
	contents = getFileContents(argv[1]);
	if (contents.empty())
		return (1);

	if (replaceToNewFile(contents, argv[1]))
		return (1);

	return (0);
}
