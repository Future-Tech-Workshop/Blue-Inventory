#pragma once

/*********************************************************
**********************************************************

This is the master include file for server applications.
All files included here should be cross-platform, or make
OS checks before their inclusion.

This file also contains the FTW_Server_Application class.

**********************************************************
**********************************************************/

#define MAX_ARGS 10

#include <iostream>
#include <fstream>
#include <string>
#include <array>

class FTW_Server_Application
{
private:
	std::array<std::string, MAX_ARGS> arguments;

public:
	FTW_Server_Application(int argc, char * argv[]);
	void print_args();

};
