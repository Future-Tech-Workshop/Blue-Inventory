#include "FTW_Server_Master.h"

FTW_Server_Application::FTW_Server_Application(int argc, char * argv[])
{
	arguments.fill(std::string("\0"));

	for (int i = 0; i < MAX_ARGS && i < argc; i++)
	{
		arguments[i].assign(argv[i]);

		std::cout << "Set arguments[" << i << "] to " << arguments[i] << std::endl;
	}
}

void FTW_Server_Application::print_args()
{
	for (int i = 0; i < MAX_ARGS; i++)
	{
		std::cout << "Arg " << i << ": ";
		if (arguments[i] == "\0")
		{
			std::cout << "No entry\n";
		}
		else
		{
			std::cout << arguments[i];
		}
	}
}
