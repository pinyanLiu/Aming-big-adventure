#include <stdlib.h>

#include "functionlist.h"

void monster(m* mPtr, g* gPtr){


        if(gPtr->barD_x>=mPtr->xo)
       mPtr->monsterMove=1;
       if(mPtr->monsterMove==1){
        mPtr->xm--;
        if(++gPtr->ccount>=gPtr->delay)
            {
                if(++gPtr->cur>=2)
                    gPtr->cur=0;
                gPtr->ccount=0;
            }
        al_draw_bitmap(mPtr->monster[gPtr->cur], mPtr->xm,mPtr->ym,0);

       }for(int i=0;i<50;i++){
    if(gPtr->barD_y==mPtr->ym+i)
        mPtr->b=1;
        if(mPtr->b==1){
    if(gPtr->barD_x==mPtr->xm)
     printf("zzz");
     }

}

}


