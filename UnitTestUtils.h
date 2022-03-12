#ifndef UNITTESTUTILS_HEADER_FILE
#define UNITTESTUTILS_HEADER_FILE

typedef struct 
{
	int (*test)();
} TEST;

typedef struct 
{
	void (*setup)();
	void (*cleanup)();
	TEST* tests;
} UNIT;

int callTest(TEST* test);
int callUnit(UNIT unit);
void testFailure(const char* name, long line, const char* message);

#define TESTFAILED(x) testFailure(__FILE__, __LINE__, x)

#endif