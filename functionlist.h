#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "header.h"

void gameStructInit(g* gPtr,m*mPtr,m* m2Ptr);
void moveAming(g* gPtr);
void groundthorn(g* gPtr,int,int);
void invisibleblock(g* gPtr);
void monster(m* mPtr,g* gPtr);

#endif
