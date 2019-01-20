
#include <stdlib.h>

#include "functionlist.h"
void deadway(g* gPtr)
{
    if(gPtr->barD_y == 500){
        gPtr->life = gPtr->life -1;
        gPtr->dead = true;
    }

}
