#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "header.h"

void gameStructInit(g* gPtr,m*mPtr,m* m2Ptr,m* m3Ptr);
void moveAming(g* gPtr);
void groundthorn(g* gPtr,int,int);
void invisiblethorn(g* gPtr,int,int);
void monster(m* mPtr,g* gPtr);
void monsterVertical(m* mPtr,g* gPtr);
void deadway(g* gPtr);
#endif
