#include <stdlib.h>

#include "functionlist.h"
void choosemap(g*gPtr){
    if(gPtr->mapcontral == 2){
        gPtr->barD_x = 0;
        gPtr->barD_y = 0;
        gPtr->block  = 0;
        gPtr->step = 0.00;
        gPtr->pass = 0;
        gPtr->stopblock = 42;
    }
    if(gPtr->mapcontral == 3){
        gPtr->barD_x = 0;
        gPtr->barD_y = 0;
        gPtr->block  = 10;
        gPtr->step = 0.00;
        gPtr->pass = 0;
        gPtr->stopblock = 66;
    }
}
