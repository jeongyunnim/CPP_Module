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
	if (!fin.eof())
		contents.clear();
	fin.close();
	return (contents);
}

int	stringErrorCheck(std::string findString, std::string replaceString)
{
	for(std::string::iterator it = findString.begin(); it < findString.end(); it++)
	{
		if (isprint(*it) == 0)
			return (ERROR);
	}
	for(std::string::iterator it = replaceString.begin(); it < replaceString.end(); it++)
	{
		if (isprint(*it) == 0)
			return (ERROR);
	}
	return (0);
}

static int	replaceToContent(std::string& contents, std::string& findString, std::string& replaceString)
{
	size_t	found;

	found = 0;
	while (1)
	{
		found = contents.find(findString, found);
		if (found == std::string::npos)
			return (0);
		else
		{
			contents.erase(found, findString.size());
			contents.insert(found, replaceString);
			found += replaceString.size();
		}
	}
	return (0);
}

int	replaceToNewFile( std::string contents, std::string fileName, std::string findString, std::string replaceString )
{
	std::ofstream	fout;
	
	fileName += ".replace";
	fout.open(fileName);
	if (fout.bad())
	{
		std::cerr << "Error\nOpen Error" << std::endl;
		return (ERROR);
	}
	replaceToContent(contents, findString, replaceString);
	fout << contents;
	fout.close();
	return (0);
}