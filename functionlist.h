#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "header.h"

void moveAming(g* gPtr,int a[],int b[]);
void gameStructInit(g* gPtr,m*mPtr,m* m2Ptr,m* m3Ptr);
void groundthorn(g* gPtr,int,int);
void invisiblethorn(g* gPtr,int,int);
void monster(m* mPtr,g* gPtr);
void monsterVertical(m* mPtr,g* gPtr);
void deadway(g* gPtr);
int groundhigh(int a,g* gPtr);
void deadjection(g*gPtr);
void map_display(int a,int i,g* gPtr,m*mPtr);
void map_move(g* gPtr);
int groundhigh(int a,g* gPtr);
void deadway(g* gPtr,m*mPtr,int a[]);
void savepoint(g* gPtr);
int pass(g*gPtr,int i);
void choosemap(g*gPtr);
void peopledisplay(g*gPtr);
void hitbrick(g*gPtr,int a,int i);
void monsterVertical(m* mPtr,g* gPtr);
#endif
