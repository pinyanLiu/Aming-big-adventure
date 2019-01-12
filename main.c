#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"
#include "header.h"

int main( void )
{
    int j,z;//monster var
    g GAME;
    m MONSTER;
    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();
    //int a;//the var of while
    // Initial game structure
    gameStructInit(&GAME,&MONSTER);

    // display = al_create_display(SCREEN_W, SCREEN_H);
    GAME.display = al_create_display(SCREEN_W, SCREEN_H);
    // bar1 = al_load_bitmap( "bar1.jpg"); /* load the bar bitmap */
    GAME.right1 = al_load_bitmap( "right1.png"); /* load the bar bitmap */
    GAME.right2 = al_load_bitmap( "right2.png");
    GAME.left1 = al_load_bitmap( "left1.png");
    GAME.left2 = al_load_bitmap( "left2.png");
    // barD_x = SCREEN_H / 2; /* give right paddle its initial X-coordinate */
    GAME.brick = al_load_bitmap( "brick.jpg");
    GAME.gthorn = al_load_bitmap( "gthorn.png");
        MONSTER.monster = al_load_bitmap( "monster.png");
    MONSTER.monster2 = al_load_bitmap( "monster2.png");
    GAME.barD_x = SCREEN_W / 2; /* give right paddle its initial X-coordinate */
    z = 1;
    while(1)
    {
        // al_get_keyboard_state(&KBstate);
        al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            break;
        // moveAming(); /* move the paddles */
        al_draw_bitmap(GAME.brick,GAME.x,GAME.y,0);

        if(al_key_down(&GAME.KBstate, ALLEGRO_KEY_RIGHT)){
        al_draw_bitmap( GAME.right1, GAME.barD_x,GAME.barD_y, 0);
        al_draw_bitmap( GAME.right2, GAME.barD_x,GAME.barD_y, 0);
        }
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_LEFT)){
        al_draw_bitmap( GAME.left1, GAME.barD_x,GAME.barD_y, 0);
        }

        printf("barD_y %d\n",GAME.barD_y);
         printf("y-10 %d\n",GAME.y-10);
          printf("barD_x%d\n",GAME.barD_x);
           printf("x %d\n",GAME.x);

        al_draw_bitmap( GAME.left2, GAME.barD_x,GAME.barD_y, 0);
        //move aming
        moveAming(&GAME);
        //monster
                if(z == 1){
        j= monster(&MONSTER,&GAME);
        if(j == 1){z++;} }
        if(j == 1){
           MONSTER.xm-=PADDLE_MOVE;
        al_draw_bitmap(MONSTER.monster,MONSTER.xm,MONSTER.ym,0);
        }
        //
        groundthorn(&GAME);
       al_rest(0.01);

        /* display */
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0));

        /* Clear the complete target bitmap, but confined by the clipping rectangle. */
    }

    // al_destroy_display( bar1);
    al_destroy_bitmap( GAME.right1);
    al_destroy_bitmap( GAME.right2);
    al_destroy_bitmap( GAME.left1);
    al_destroy_bitmap( GAME.left2);
    // al_destroy_display( display); /* destroy the display */
    al_destroy_bitmap( GAME.brick);
    al_destroy_bitmap( GAME.gthorn);
    al_destroy_display( GAME.display); /* destroy the display */
    al_destroy_bitmap( MONSTER.monster2);
    al_destroy_bitmap( MONSTER.monster);
    return 0;
} /* end function main */
