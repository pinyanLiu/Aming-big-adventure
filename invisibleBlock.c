/*#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"


void invisibleblock(g* gPtr)
{
    int i;
    for(i=0;i<50;i++){
        if (gPtr->barD_y==gPtr->y && gPtr->barD_x==gPtr->x+i)

        printf("***");


}

}*/
/*����ᤣ��A���W�A�^�쥻����m*/
#include <stdlib.h>

#include "functionlist.h"

void monsterP(int monster,m*mPtr)
{
    if(monster=1)
        mPtr->xm--;
al_draw_bitmap(mPtr->monster2, mPtr->xm,mPtr->ym,0);
}
