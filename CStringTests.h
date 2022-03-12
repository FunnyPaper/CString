#ifndef CSTRINGTESTS_HEADER_FILE
#define CSTRINGTESTS_HEADER_FILE

#include "UnitTestUtils.h"

void setupUnit();
void cleanupUnit();

int testLength();

int testAtFirstElement();
int testAtLastElement();
int testAtFifthElement();
int testAtOutOfBound();

int testSetCharFirstElementToX();
int testSetCharLastElementToY();
int testSetCharOutOfBoundElementToZ();

int testDataGet();
int testDataTryModify();

extern UNIT cstringUnit;

#endif 