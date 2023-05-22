#pragma once
#ifndef	_CONTROL_FILE_H__
#define	_CONTROL_FILE_H__

#include <iostream>
#include <fstream>

std::string	getFileContents( char *fileName );
int			replaceToNewFile( std::string contents, std::string fileName );

#endif