#include <assert.h>
#include <string.h>

#include "UnitTestUtils.h"
#include "CStringTests.h"
#include "CString.h"

static CString* data;
static const char* str = "Hello from CStringTests";

void setupUnit()
{
	data = cstring_new(str);
}

void cleanupUnit()
{
	cstring_delete(data);
}

int testLength()
{
	size_t expected = 23;
	size_t actual = cstring_length(data);
	
	if(actual != expected)
	{
		TESTFAILED("actual not equal expected");
		assert(expected != actual);
		return 0;
	}
	
	return 1;
}

int testAtFirstElement()
{
	char expected = 'H';
	char actual = cstring_at(data, 0);
	
	if(actual != expected)
	{
		TESTFAILED("actual not equal expected");
		assert(expected != actual);
		return 0;
	}
	
	return 1;
}

int testAtLastElement()
{
	char expected = 's';
	char actual = cstring_at(data, 22);
	
	if(actual != expected)
	{
		TESTFAILED("actual not equal expected");
		assert(expected != actual);
		return 0;
	}
	
	return 1;
}

int testAtFifthElement()
{
	char expected = 'o';
	char actual = cstring_at(data, 4);
	
	if(actual != expected)
	{
		TESTFAILED("actual not equal expected");
		assert(expected != actual);
		return 0;
	}
	
	return 1;
}

int testAtOutOfBound()
{
	char expected = (char)-1;
	char actual = cstring_at(data, 100);
	
	if(actual != expected)
	{
		TESTFAILED("actual not equal expected");
		assert(expected != actual);
		return 0;
	}
	
	return 1;
}

int testSetCharFirstElementToX()
{
	const char* expected = "Xello from CStringTests";
	const char* actual;
	
	cstring_setChar(data, 0, 'X');
	
	actual = cstring_data(data);
	
	if(strcmp(expected, actual))
	{
		TESTFAILED("actual not equal expected");
		assert(strcmp(expected, actual));
		return 0;
	}
	
	cstring_setChar(data, 0, 'H');
	return 1;
}

int testSetCharLastElementToY()
{
	const char* expected = "Hello from CStringTestY";
	const char* actual;
	
	cstring_setChar(data, 22, 'Y');
	
	actual = cstring_data(data);
	
	if(strcmp(expected, actual))
	{
		TESTFAILED("actual not equal expected");
		assert(strcmp(expected, actual));
		return 0;
	}
	
	cstring_setChar(data, 22, 's');
	return 1;
}

int testSetCharOutOfBoundElementToZ()
{
	const char* expected = "Hello from CStringTests";
	const char* actual;
	
	cstring_setChar(data, -100, 'Z');
	
	actual = cstring_data(data);
	
	if(strcmp(expected, actual))
	{
		TESTFAILED("actual not equal expected");
		assert(strcmp(expected, actual));
		return 0;
	}
	
	return 1;
}

int testDataGet()
{
	const char* expected = "Hello from CStringTests";
	const char* actual = cstring_data(data);
	
	if(strcmp(expected, actual))
	{
		TESTFAILED("actual not equal expected");
		assert(strcmp(expected, actual));
		return 0;
	}
	
	return 1;
}

TEST tests[] = {
		&testLength, 
		&testAtFirstElement,
		&testAtLastElement,
		&testAtFifthElement,
		&testAtOutOfBound,
		&testSetCharFirstElementToX,
		&testSetCharLastElementToY,
		&testSetCharOutOfBoundElementToZ,
		&testDataGet
};
UNIT cstringUnit = {
	&setupUnit,
	&cleanupUnit,
	tests
};