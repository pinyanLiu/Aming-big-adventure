#include <stdlib.h>

#include "functionlist.h"

void fall(int i,g* gPtr)
{
    if(gPtr->barD_x > i && gPtr->barD_x<i)
    {
    if(gPtr->barD_y>=350)
     gPtr->barD_y = gPtr->barD_y +10;
    }
 if(gPtr->barD_y>350){
    gPtr->barD_y = gPtr->barD_y+1;
 }
}
