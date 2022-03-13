#include <stdlib.h>
#include <string.h>

#include "CString.h"

// Przykładowa definicja CStringa i metod na nim operujących

typedef struct CString
{
	char* data;
	size_t length;
	
} CString;

CString* cstring_new(const char* str)
{
	CString* res = malloc(sizeof(CString));
	size_t len = strlen(str) + 1;
	
	res->data = malloc(len);
	strncpy(res->data, str, len);
	
	res->length = len-1;
	
	return res;
}

void cstring_delete(CString* cstring)
{
	free(cstring->data);
	free(cstring);
}

size_t cstring_length(CString* cstring)
{
	return cstring->length;
}

char cstring_at(CString* cstring, size_t index)
{
	if(index >= cstring->length || index < 0)
		return -1;
	
	return *(cstring->data + index);
}

int cstring_setChar(CString* cstring, size_t index, char chr)
{
	if(index >= cstring->length || index < 0)
		return -1;
		
	*(cstring->data + index) = chr;
	return 1;
}

const char* cstring_data(CString* cstring)
{
	return cstring->data;
}
