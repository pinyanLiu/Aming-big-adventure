#include <stdlib.h>

#include "functionlist.h"

int monster(m* mPtr, g* gPtr){


        if(gPtr->barD_x>=mPtr->xo)
       mPtr->monsterMove=1;
       if(mPtr->monsterMove==1){
        mPtr->xm--;
        al_draw_bitmap(mPtr->monster2, mPtr->xm,mPtr->ym,0);
       }



}


