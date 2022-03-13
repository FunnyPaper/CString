#include <stdio.h>

#include "CStringTests.h"

// Uruchomienie przygotowanych testów

int main(void) 
{	
	if(callUnit(cstringUnit))
	{
		puts("All test passed!");
	}

	return 0;
}
