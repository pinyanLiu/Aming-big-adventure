#include <stdlib.h>

#include "functionlist.h"

int monster(m*mPtr,g* gPtr){
int i,j;


for(i=0;i<50;i++){
        if(gPtr->barD_y==mPtr->yo && gPtr->barD_x==mPtr->xo+i)
        {j=1;
         break;}

/*while(j==1)
    {
        mPtr->xm-=PADDLE_MOVE;

        al_draw_bitmap(mPtr->monster,mPtr->xm,mPtr->ym,0);
       j=0;

    }*/else j=0;}
 return j;

}

