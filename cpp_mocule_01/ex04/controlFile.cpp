#include "controlFile.hpp"

std::string	getFileContents( char *fileName )
{
	std::ifstream	fin;
	std::string	contents;

	fin.open(fileName);
	if (fin.bad())
	{
		std::cerr << "Error\nOpen Error" << std::endl;
		return (NULL);
	}
	std::getline(fin, contents, static_cast<char>(EOF));
	fin.close();
	return (contents);
}

int	replaceToNewFile(std::string contents, std::string fileName)
{
	std::ofstream	fout;
	
	fileName += ".replace";
	
	fout.open(fileName);
	fout << contents;
	fout.close();

	return (0);
}