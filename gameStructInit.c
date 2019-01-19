#include <stdlib.h>

#include "functionlist.h"

void gameStructInit(g* gPtr,m* mPtr,m* m2Ptr)
{
    gPtr->cur=0;
    gPtr->ccount=0;
    gPtr->delay=5;
    gPtr->keydown=2;
    gPtr->x=100;
    gPtr->y=440;
    gPtr->jump = false;
    gPtr->jumpSpeed = 15;
    gPtr->velX = 0;
    gPtr->velY = 0;
    gPtr->gravity = 1;
    gPtr->groundHeight = 430;
   // gPtr->alEventQueue = NULL;
    gPtr->right[gPtr->cur]=NULL;
    gPtr->left[gPtr->cur]=NULL;
    gPtr->brick = NULL;
    gPtr->display = NULL;
    mPtr->xo=390;//monster will start move while aming is right here
    mPtr->yo=440;
    mPtr->xm=630;//location of monster
    mPtr->ym=430;
    mPtr->monster[gPtr->cur] = NULL;
    mPtr->monsterMove = NULL;

    m2Ptr->xo=280;//monster will start move while aming is right here
    m2Ptr->yo=440;
    m2Ptr->xm=630;//location of monster
    m2Ptr->ym=220;
    m2Ptr->monster[gPtr->cur] = NULL;
    m2Ptr->monsterMove = NULL;
}
