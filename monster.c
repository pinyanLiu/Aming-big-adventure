#include <stdlib.h>

#include "functionlist.h"

void monster(m* mPtr, g* gPtr,int a[]){


        if(a[10] == 1 )
       mPtr->monsterMove=1;
       if(mPtr->monsterMove==1){
        mPtr->xm--;
        if(++gPtr->ccount>=gPtr->delay)
            {
                if(++gPtr->cur ==2)
                    gPtr->cur=0;
                gPtr->ccount=0;
            }
        al_draw_bitmap(mPtr->monster[gPtr->cur], mPtr->xm,mPtr->ym,0);

       }
       if(mPtr->xm < 0){
        mPtr->monsterMove=0;
        mPtr->xo=250;//monster will start move while aming is right here
        mPtr->yo=350;//地面高度
        mPtr->xm=500;//location of monster
        mPtr->ym=350;//地面高度
        }

    if(gPtr->barD_y== 350 && gPtr->barD_x==mPtr->xm){
    gPtr->barD_y=500;
    mPtr->b=0;
    mPtr->monsterMove=0;
        mPtr->xo=250;//monster will start move while aming is right here
        mPtr->yo=350;//地面高度
        mPtr->xm=500;//location of monster
        mPtr->ym=350;//地面高度
     }





}



