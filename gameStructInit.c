#include <stdlib.h>

#include "functionlist.h"

void gameStructInit(g* gPtr,m* mPtr,m* m2Ptr,m* m3Ptr)
{
    gPtr->cur=0;
    gPtr->ccount=0;
    gPtr->delay=5;
    gPtr->keydown=2;
    gPtr->x=100;
    gPtr->y=440;
    gPtr->xi=0;
    gPtr->yi=0;
    gPtr->jump = false;
    gPtr->jumpSpeed = 15;
    gPtr->velX = 0;
    gPtr->velY = 0;
    gPtr->gravity = 1;
    gPtr->groundHeight = 430;
    gPtr->dead = false;
    gPtr->life = 3;
    gPtr->right[gPtr->cur]=NULL;
    gPtr->left[gPtr->cur]=NULL;
    gPtr->START = NULL;
    gPtr->STAFF = NULL;
    gPtr->OPERATION = NULL;
    gPtr->BACKTOHOMEPAGE = NULL;
    gPtr->brick = NULL;
    gPtr->display = NULL;
    gPtr->startpage= NULL;
    gPtr->d1page1;
    gPtr->d1page2;
    gPtr->d1page3;
    gPtr->d2page;
    gPtr->d3page1;
    gPtr->d3page2;

    mPtr->xo=390;//monster will start move while aming is right here
    mPtr->yo=440;
    mPtr->xm=630;//location of monster
    mPtr->ym=430;
    mPtr->monster[gPtr->cur] = NULL;
    mPtr->monsterMove = NULL;
    mPtr->rocket = NULL;
    mPtr->superman = NULL;
    mPtr->b= NULL;

    m2Ptr->xo=280;//monster will start move while aming is right here
    m2Ptr->yo=440;
    m2Ptr->xm=630;//location of monster
    m2Ptr->ym=220;
    m2Ptr->monster[gPtr->cur] = NULL;
    m2Ptr->monsterMove = NULL;
    m2Ptr->rocket = NULL;
    m2Ptr->superman = NULL;

    m3Ptr->xo=400;//monster will start move while aming is right here
    m3Ptr->yo=440;
    m3Ptr->xm=400;//location of monster
    m3Ptr->ym=640;
    m3Ptr->monster[gPtr->cur] = NULL;
    m3Ptr->monsterMove = NULL;
    m3Ptr->c= NULL;
    m3Ptr->rocket = NULL;
    m3Ptr->superman = NULL;
}
