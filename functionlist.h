#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "header.h"

void gameStructInit(g* gPtr,m*mPtr);
void moveAming(g* gPtr);
void groundthorn(g* gPtr);
void invisibleblock(g* gPtr);
int monster(m*mPtr,g* gPtr);
#endif
