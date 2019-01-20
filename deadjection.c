
#include <stdlib.h>

#include "functionlist.h"
void deadway(g* gPtr,m* mPtr,int a[])
{
    int i;
    if(gPtr->barD_y == 500){
        gPtr->life = gPtr->life -1;
        gPtr->dead = true;
    }
    for(i=0;i<11;i++){
    if(a[i] == 8 || a[i ]== 52 ){
        if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
            if(gPtr->barD_y == 350){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->grassthorn,50*i-gPtr->step,350,0);

            }
        }
    }
    if( a[i] == 50 || a[i] == 35){
        if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
            if(gPtr->barD_y == 350){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,375,0);

            }
        }
    }
    if(a[i] == 19 || a[i] == 42){
        if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
            if(gPtr->jump == false && gPtr->barD_y>299){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->topthorn,50*i-gPtr->step,300,0);
            }
        }
    }
    if(a[i] == 15 ){
        if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+125){
            if(gPtr->barD_y<200){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->cloudthorn,50*i-gPtr->step,100,0);
        }
    }
    }
    if(a[i] == 18 || a[i] == 41){
     if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
            if(gPtr->barD_y == 200){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,225,0);
            }
        }
    }
    if(a[i] == 28){
     if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
            if(gPtr->jump == false && gPtr->barD_y>199){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->topthorn,50*i-gPtr->step,200,0);
            }
        }
    }
    if(a[i] == 29){
     if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
            if( gPtr->barD_y == 300){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->grassthorn,50*i-gPtr->step,300,0);
            }
        }
    }
    if(a[i] == 40){
     if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+25){
             if( gPtr->barD_y   == 300 ){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->pillfake,50*i-gPtr->step,300,0);
                al_draw_bitmap(gPtr->topthorn,50*i-gPtr->step,200,0);
            }
        }
    }
    if(a[i] == 31 ){
        if(gPtr->barD_x > 50*i-gPtr->step-25 && gPtr->barD_x < 50*i-gPtr->step+175){
            if(gPtr->barD_y<300 && gPtr->barD_y>150){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
                al_draw_bitmap(gPtr->truethorn,50*i-gPtr->step,200,0);
            }
        }
    }
    if(gPtr->barD_x == mPtr->xm && gPtr->barD_y == mPtr->ym){
                gPtr->life = gPtr->life -1;
                gPtr->dead = true;
    }

    }
}
