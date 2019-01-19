
#include <stdlib.h>

#include "functionlist.h"

void monsterVertical(m* mPtr, g* gPtr){


        if(gPtr->barD_x>=mPtr->xo)
       mPtr->monsterMove=1;
       if(mPtr->monsterMove==1){
        mPtr->ym=mPtr->ym-1;//superman velocity

        al_draw_bitmap(mPtr->superman, mPtr->xm,mPtr->ym,0);
}



//superman W200H400
//Aming W50H50
  for(int i=0;i<200;i++){
    if(gPtr->barD_x==mPtr->xm+i)
        mPtr->c=1;
        if(mPtr->c==1){
    if(gPtr->barD_y==mPtr->ym-i)
     printf("you are dead");
     }
}
}

