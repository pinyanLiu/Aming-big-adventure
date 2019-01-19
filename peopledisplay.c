#include <stdlib.h>

#include "functionlist.h"
void peopledisplay(g*gPtr){
        if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_LEFT))
        {
            gPtr->keydown=1;
            if(++gPtr->ccount>=gPtr->delay)
            {
                if(++gPtr->cur>=2)
                    gPtr->cur=0;
                gPtr->ccount=0;
            }
        }
        if(gPtr->keydown==1)
        al_draw_bitmap( gPtr->left[gPtr->cur], gPtr->barD_x,gPtr->barD_y, 0);


        if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
        {
            gPtr->keydown=2;
            if(++gPtr->ccount>=gPtr->delay)
            {
                if(++gPtr->cur>=2)
                    gPtr->cur=0;
                gPtr->ccount=0;
            }
        }
        if(gPtr->keydown==2)
        al_draw_bitmap( gPtr->right[gPtr->cur], gPtr->barD_x,gPtr->barD_y, 0);
        //¿ï¾Ü¹Ï®×
        if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump && al_key_down(&gPtr->KBstate, ALLEGRO_KEY_LEFT))
        {
            al_draw_bitmap( gPtr->leftjump, gPtr->barD_x,gPtr->barD_y, 0);
        }
        if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump && al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
        {
            al_draw_bitmap( gPtr->rightjump, gPtr->barD_x,gPtr->barD_y, 0);
        }
}
