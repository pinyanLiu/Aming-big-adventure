#include <stdlib.h>

#include "functionlist.h"

void monster(m* mPtr, g* gPtr){


        if(gPtr->barD_x>=mPtr->xo)
       mPtr->monsterMove=1;
       if(mPtr->monsterMove==1){
        mPtr->xm--;
        al_draw_bitmap(mPtr->monster2, mPtr->xm,mPtr->ym,0);

       }
        if(mPtr->xm==0){
                 mPtr->monsterMove=2;}
         if(mPtr->monsterMove==2){
            mPtr->xm=mPtr->xm+3;
        al_draw_bitmap(mPtr->monster2, mPtr->xm,mPtr->ym,0);
 }

}


