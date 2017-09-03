#include "FTW_Server_Master.h"

int main(int argc, char * argv[])
{
	std::cout << argc << std::endl << std::endl;

	FTW_Server_Application Serv(argc, argv);
	std::cout << std::endl;
	Serv.print_args();

	char stop = '\0';
	std::cin >> stop;

	return 0;
}