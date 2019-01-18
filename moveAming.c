#include <stdlib.h>

#include "functionlist.h"


void moveAming(g* gPtr)
{
    //display bitmap
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

    if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump && al_key_down(&gPtr->KBstate, ALLEGRO_KEY_LEFT))
    {
        al_draw_bitmap( gPtr->leftjump, gPtr->barD_x,gPtr->barD_y, 0);
    }
    if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump && al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
    {
        al_draw_bitmap( gPtr->rightjump, gPtr->barD_x,gPtr->barD_y, 0);
    }
    // if (al_key_down(&KBstate, ALLEGRO_KEY_LEFT)) barD_x -= PADDLE_MOVE;
    if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_LEFT))
    {
        gPtr->barD_x -= PADDLE_MOVE;
    }

    // if (al_key_down(&KBstate, ALLEGRO_KEY_RIGHT)) barD_x += PADDLE_MOVE;
    if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
    {
        gPtr->barD_x += PADDLE_MOVE;
    }
    if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump && al_key_down(&gPtr->KBstate, ALLEGRO_KEY_LEFT))
    {
        al_draw_bitmap( gPtr->leftjump, gPtr->barD_x,gPtr->barD_y, 0);
    }
    if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump && al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
    {
        al_draw_bitmap( gPtr->rightjump, gPtr->barD_x,gPtr->barD_y, 0);
    }
    // if(al_key_down(&KBstate, ALLEGRO_KEY_J) && jump)
    if(al_key_down(&gPtr->KBstate, ALLEGRO_KEY_J) && gPtr->jump)//JUMP 104
    {
        // velY = -jumpSpeed;
        gPtr->velY = -gPtr->jumpSpeed;
        // jump = false;
        gPtr->jump = false;
    }

    // if(!jump)
    if(!gPtr->jump)//jump
        // velY += gravity;
        gPtr->velY += gPtr->gravity;
    else
        // velX = 0;
        gPtr->velX = 0;

    // barD_x += velX;
    gPtr->barD_x += gPtr->velX;
    // barD_y += velY;
    gPtr->barD_y += gPtr->velY;

    // jump = (barD_y >= groundHeight);
    gPtr->jump = (gPtr->barD_y >= gPtr->groundHeight);

    // if(jump)
    if(gPtr->jump)//didnt jump
    {
        // barD_y = groundHeight;
        gPtr->barD_y = gPtr->groundHeight;
    }
    // if (barD_x < 0)
    if (gPtr->barD_x < 0)
        // barD_x =0; /* make sure the paddles don go off screen */
        gPtr->barD_x =0; /* make sure the paddles don go off screen */

    // if (barD_x > 625)
    if (gPtr->barD_x > 625)
        // barD_x =620; /* make sure the paddles don go off screen */
        gPtr->barD_x =620; /* make sure the paddles don go off screen */
}


