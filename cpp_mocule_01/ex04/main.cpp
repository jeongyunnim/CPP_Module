#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	std::ifstream	fin;
	std::fstream	fs;
	std::string		content;

	if (argc != 4)
	{
		std::cerr << "Error\nArgument count error" << std::endl;
		return (1);
	}
	fin.open(argv[1]);
	std::getline(fin, content, static_cast<char>(EOF));
	// std::cout << content << std::endl;

	std::ofstream	fout;
	std::string		fileName;
	
	fileName = argv[1];
	fileName += ".replace";
	
	fout.open(fileName);
	fout << content;

	//파일 닫기
	fin.close();
	fout.close();
	return (0);
}
