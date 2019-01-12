#include <stdlib.h>

#include "functionlist.h"


void groundthorn(g* gPtr)
{
    int i;
    for(i=0;i<50;i++){
        if (gPtr->barD_y==gPtr->y&& gPtr->barD_x==gPtr->x+i)
        {
            al_draw_bitmap(gPtr->gthorn,gPtr->x,gPtr->y-10,0);

        /*printf("you died\n");
        system("pause");
        gPtr->barD_y=440;
         gPtr->barD_x=SCREEN_W / 2;*/
        }

    }

}




