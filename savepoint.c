#include <stdlib.h>

#include "functionlist.h"
void savepoint(g* gPtr,m*mPtr){

if(gPtr->life != 0){
           if(gPtr->mapcontral == 1){
            if(gPtr->block < 42){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 0;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            mPtr->b=0;
            mPtr->monsterMove=0;
            mPtr->xo=250;//monster will start move while aming is right here
            mPtr->yo=350;//地面高度
            mPtr->xm=500;//location of monster
            mPtr->ym=350;//地面高度
            }
            if(gPtr->block >= 42){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 42;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            mPtr->b=0;
            mPtr->monsterMove=0;
            mPtr->xo=250;//monster will start move while aming is right here
            mPtr->yo=350;//地面高度
            mPtr->xm=500;//location of monster
            mPtr->ym=350;//地面高度
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
            mPtr->b=0;
            mPtr->monsterMove=0;
            mPtr->xo=250;//monster will start move while aming is right here
            mPtr->yo=350;//地面高度
            mPtr->xm=500;//location of monster
            mPtr->ym=350;//地面高度
            }
            if(gPtr->block >= 18){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 18;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            mPtr->b=0;
            mPtr->monsterMove=0;
            mPtr->xo=250;//monster will start move while aming is right here
            mPtr->yo=350;//地面高度
            mPtr->xm=500;//location of monster
            mPtr->ym=350;//地面高度
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
            mPtr->b=0;
            mPtr->monsterMove=0;
            mPtr->xo=250;//monster will start move while aming is right here
            mPtr->yo=350;//地面高度
            mPtr->xm=500;//location of monster
            mPtr->ym=350;//地面高度
            }
            if(gPtr->block >= 39){
            gPtr->barD_x=0;
            gPtr->barD_y =350;
            gPtr->block = 39;
            gPtr->step =0;
            gPtr->dead = false;
            gPtr->jump == true;
            mPtr->b=0;
            mPtr->monsterMove=0;
            mPtr->xo=250;//monster will start move while aming is right here
            mPtr->yo=350;//地面高度
            mPtr->xm=500;//location of monster
            mPtr->ym=350;//地面高度
            }
           }
    }

}
