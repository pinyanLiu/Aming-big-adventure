#include <stdlib.h>

#include "functionlist.h"
int deadway(g* gPtr)
{
    int dead=1;
    if(gPtr->barD_y == 500){
        gPtr->life = gPtr->life -1;
        dead = 0;
    }
    return dead;
}
