#pragma once
#ifndef	_CONTROL_FILE_H__
#define	_CONTROL_FILE_H__

#include <iostream>
#include <fstream>
#define ERROR -1

int getFileContents( char *fileName, std::string& contents );
int stringErrorCheck( std::string findString, std::string replaceString );
int	replaceToNewFile( std::string contents, std::string fileName, std::string findString, std::string replaceString );
#endif
