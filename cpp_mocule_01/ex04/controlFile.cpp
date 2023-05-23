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

// static int	isFindString(std::string& findString, std::string::iterator it)
// {
// 	for (size_t i = 0; i < findString.size(); i++)
// 	{
// 		if (*it != findString[i])
// 			return (0);
// 		it++;
// 	}
// 	return (1);
// }

// static void	writeNewFile(std::ofstream& fout, std::string& contents, std::string& findString, std::string& replaceString)
// {
// 	for (std::string::iterator it = contents.begin(); it < contents.end(); it++)
// 	{
// 		if (*it != findString[0])
// 			fout << *it;
// 		else
// 		{
// 			if (isFindString(findString, it) == 1)
// 			{
// 				it += findString.size() - 1;
// 				fout << replaceString;
// 			}
// 			else
// 				fout << *it;
// 		}	
// 	}
// }

static int	replaceToContent(std::string& contents, std::string& findString, std::string& replaceString)
{
	size_t	found;

	found = 0;
	for (std::string::iterator it = contents.begin(); it < contents.end(); it++)
	{
		found = contents.find(findString, found);
		if (found == contents.size())
			return (0);
		it += found;
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
	fout.close();
	return (0);
}