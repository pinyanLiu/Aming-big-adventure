#include <stdlib.h>

#include "functionlist.h"

void map_display(int a,int i,g* gPtr){
    if(a == 1)
            {
            al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
             al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);

            }
    if(a == 2){

            al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
            al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
            al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                       /* crush_min[i] = map_locate.point-30.00;
                        crush_max[i] = map_locate.point+30.00;*/
            }

}
