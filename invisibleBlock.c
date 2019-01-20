#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"


void invisiblethorn(g* gPtr,int xi,int yi)
{

    int i;
    for(i=0;i<50;i++){
        if (gPtr->barD_y==yi&& gPtr->barD_x==xi+i)
        {
            al_draw_bitmap(gPtr->gthorn,xi,yi-10,90);

        }

    }

}

