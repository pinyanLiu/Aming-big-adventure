#include <stdlib.h>

#include "functionlist.h"


void groundthorn(g* gPtr,int x,int y)
{

    int i;
    for(i=0;i<100;i++){
        if (gPtr->barD_y==y&& gPtr->barD_x==x+i)
        {
            al_draw_bitmap(gPtr->gthorn,x,y-10,0);
            gPtr->barD_y=500;
            deadway(gPtr);
        }

    }


}




