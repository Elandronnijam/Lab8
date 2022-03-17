#include <iostream>
#include <cmath>
#include "Header.h"

//	IIOTAIIEHKO G. A.
//	BAPUAHT 16

int main()
{
	std::cout << "Hello, world!" << std::endl << std::endl;

	int restart_client_call = 1;
	while (restart_client_call == 1)
	{
		restart_client_call = client_call();
	}

}