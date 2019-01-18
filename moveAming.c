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
        al_draw_bitmap( gPtr->left1, gPtr->barD_x,gPtr->barD_y, 0);
        gPtr->barD_x -= PADDLE_MOVE;
    }

    // if (al_key_down(&KBstate, ALLEGRO_KEY_RIGHT)) barD_x += PADDLE_MOVE;
    if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
    {
        al_draw_bitmap( gPtr->right1, gPtr->barD_x,gPtr->barD_y, 0);
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

    // if (al_key_down(&KBstate, ALLEGRO_KEY_SPACE)) barD_x -= PADDLE_MOVE; /*JUMP*/

    // if (barD_x < 0)
    if (gPtr->barD_x < 0)
        // barD_x =0; /* make sure the paddles don go off screen */
        gPtr->barD_x =0; /* make sure the paddles don go off screen */

    // if (barD_x > 625)
    if (gPtr->barD_x > 625)
        // barD_x =620; /* make sure the paddles don go off screen */
        gPtr->barD_x =620; /* make sure the paddles don go off screen */
}
/*void game(struct GAME* gamePtr)
{

}*/
void gameStructInit(g* gPtr,m* mPtr,m* m2Ptr)
{
    gPtr->cur=0;
    gPtr->ccount=0;
    gPtr->delay=5;
    gPtr->keydown=2;
    gPtr->x=100;
    gPtr->y=440;
    gPtr->jump = false;
    gPtr->jumpSpeed = 15;
    gPtr->velX = 0;
    gPtr->velY = 0;
    gPtr->gravity = 1;
    gPtr->groundHeight = 430;
    gPtr->right[gPtr->cur]=NULL;
    gPtr->left[gPtr->cur]=NULL;
    gPtr->brick = NULL;
    gPtr->display = NULL;
    mPtr->xo=390;//monster will start move while aming is right here
    mPtr->yo=440;
    mPtr->xm=630;//location of monster
    mPtr->ym=430;
    mPtr->monster = NULL;
    mPtr->monster2 = NULL;
    mPtr->monsterMove = NULL;

    m2Ptr->xo=280;//monster will start move while aming is right here
    m2Ptr->yo=440;
    m2Ptr->xm=630;//location of monster
    m2Ptr->ym=220;
    m2Ptr->monster = NULL;
    m2Ptr->monster2 = NULL;
    m2Ptr->monsterMove = NULL;
}

