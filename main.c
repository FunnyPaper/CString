#include <stdio.h>

#include "CStringTests.h"

int main(void) 
{	
	if(callUnit(cstringUnit))
	{
		puts("All test passed!");
	}

	return 0;
}