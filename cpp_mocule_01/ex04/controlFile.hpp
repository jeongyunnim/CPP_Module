#pragma once
#ifndef	_CONTROL_FILE_H__
#define	_CONTROL_FILE_H__

#include <iostream>
#include <fstream>
#define ERROR -1

std::string	getFileContents( char *fileName );
int			replaceToNewFile( std::string contents, std::string fileName, std::string findString, std::string replaceString );

#endif