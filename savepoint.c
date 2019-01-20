#include <stdlib.h>

#include "functionlist.h"
void savepoint(g* gPtr){

if(gPtr->life != 0){
           if(gPtr->mapcontral == 1){
            if(gPtr->block < 42){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 0;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            }
            if(gPtr->block >= 42){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 42;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            }
           }
        if(gPtr->mapcontral == 2){
            if(gPtr->block < 18){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 0;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            }
            if(gPtr->block >= 18){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 18;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            }
           }
        if(gPtr->mapcontral == 3){
            if(gPtr->block < 39){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 10;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            }
            if(gPtr->block >= 39){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 39;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            }
           }
    }

}
