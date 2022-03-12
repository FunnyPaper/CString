#include <stdio.h>

#include "UnitTestUtils.h"

int callTest(TEST* test)
{
	return test->test();
}

int callUnit(UNIT unit)
{
	int ecode = 1;
	
	if(unit.setup)
		unit.setup();
	
	TEST* test = unit.tests;
	while(test->test != 0)
	{
		if(!callTest(test++))		
			ecode = 0;
	}
	
	if(unit.cleanup)
		unit.cleanup();
	
	return ecode;
}

void testFailure(const char* name, long line, const char* message)
{
	fprintf(stderr, "%s[%i]: test failed, %s\n", name, line, message);
}