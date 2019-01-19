#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED

#include "header.h"

void gameStructInit(g* gPtr,m*mPtr);
void moveAming(g* gPtr,int a[]);
void groundthorn(g* gPtr,int,int);
void invisibleblock(g* gPtr);
int monster(m*mPtr,g* gPtr);
int groundhigh(int a,g* gPtr);
void deadjection(g*gPtr);
void map_display(int a,int i,g* gPtr,m*mPtr);
void map_move(g* gPtr);
int groundhigh(int a,g* gPtr);
void deadway(g* gPtr);
void savepoint(g* gPtr);
int pass(g*gPtr,int i);
void choosemap(g*gPtr);
void peopledisplay(g*gPtr);

void monsterVertical(m* mPtr,g* gPtr);

void peopledisplay(g*gPtr);
#endif
