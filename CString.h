#ifndef CSTRING_HEADER_FILE
#define CSTRING_HEADER_FILE

#include <stddef.h>

// Struktura CString jako typ niekompletny - tylko implementacja tego pliku ma dostęp do prawdziwej definicji CString

typedef struct CString CString;

// Deklaracje metod operujących na CStringu

CString* cstring_new(const char*);
void cstring_delete(CString*);

size_t cstring_length(CString*);
char cstring_at(CString*, size_t);
int cstring_setChar(CString*, size_t, char);
const char* cstring_data(CString*);

#endif
