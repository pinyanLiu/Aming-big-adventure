#include <stdlib.h>

#include "functionlist.h"
void savepoint(g* gPtr){

if(gPtr->life != 0){
            if(gPtr->block < 40){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 0;
            gPtr->step =0;
            gPtr->dead = false;
            }
            if(gPtr->block >= 40){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 45;
            gPtr->step =0;
            gPtr->dead = false;
            }
    }
}
