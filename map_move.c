#include <stdlib.h>

#include "functionlist.h"

void map_move(g* gPtr){
    if( gPtr->block != gPtr->stopblock)
        {
        if (gPtr->barD_x > 300)
            {
            gPtr->barD_x = 300;
            }
        }
        if( gPtr->block != 0)
        {
        if (gPtr->barD_x < 200)
            {
            gPtr->barD_x = 200;
            }
         }
        if(gPtr->barD_x >= 300 &&gPtr->block != gPtr->stopblock)
            {
            gPtr->step=gPtr->step+3;
            gPtr->barD_x =gPtr->barD_x -1;
            }
        if(gPtr->barD_x <= 200 && gPtr->block != 0)
            {
            gPtr->step=gPtr->step-3;
           gPtr->barD_x =gPtr->barD_x +1;
            }
        if(gPtr->step > 50  )
            {
            gPtr->block++;
            gPtr->step=0;
            }
        if(gPtr->step < 0 )
            {
            gPtr->block--;
            gPtr->step=50;
            }
         if (gPtr->barD_x< 0)
            {
            gPtr->barD_x= 0;
            }
         if (gPtr->barD_x > 450)
            {
            gPtr->barD_x = 450;
            }

}

