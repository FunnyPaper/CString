#ifndef CSTRINGTESTS_HEADER_FILE
#define CSTRINGTESTS_HEADER_FILE

#include "UnitTestUtils.h"

// Funkcje operujące żywotnością CString (tworzenie/ niszczenie)
void setupUnit();
void cleanupUnit();

// Testy funkcji długości
int testLength();

// Testy funkcji zwracającej znak na danej pozycji 
int testAtFirstElement();
int testAtLastElement();
int testAtFifthElement();
int testAtOutOfBound();

// Testy funkcji zmieniającej znak na danej pozycji
int testSetCharFirstElementToX();
int testSetCharLastElementToY();
int testSetCharOutOfBoundElementToZ();

// Testy funkcji zwracającej wewnętrzny łańcuch znaków
int testDataGet();

extern UNIT cstringUnit;

#endif
 