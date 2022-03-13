#ifndef CSTRING_HEADER_FILE
#define CSTRING_HEADER_FILE
#include <stddef.h>

typedef struct CString CString;

CString* cstring_new(const char*);
void cstring_delete(CString*);

size_t cstring_length(CString*);
char cstring_at(CString*, size_t);
int cstring_setChar(CString*, size_t, char);
const char* cstring_data(CString*);

#endif
