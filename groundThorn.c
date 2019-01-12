#include <stdlib.h>

#include "functionlist.h"


void groundthorn(g* gPtr,int x,int y)
{

    int i;
    for(i=0;i<50;i++){
        if (gPtr->barD_y==y&& gPtr->barD_x==x+i)
        {
            al_draw_bitmap(gPtr->gthorn,x,y-10,0);

        /*printf("you died\n");
        system("pause");
        gPtr->barD_y=440;
         gPtr->barD_x=SCREEN_W / 2;*/
        }

    }

}




