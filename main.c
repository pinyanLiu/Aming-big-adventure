#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"
#include "header.h"

int main( void )
{
    g GAME;
    m MONSTER,MONSTER2,MONSTER3;

    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_mouse();
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();

    // Initial game structure
    gameStructInit(&GAME,&MONSTER,&MONSTER2,&MONSTER3);

    // display = al_create_display(SCREEN_W, SCREEN_H);
    GAME.display = al_create_display(SCREEN_W, SCREEN_H);
    //load the bitmap
    GAME.right[0]= al_load_bitmap( "right1.png");
    GAME.right[1]= al_load_bitmap( "right2.png");
    GAME.left[0]= al_load_bitmap( "left1.png");
    GAME.left[1]= al_load_bitmap( "left2.png");
    GAME.rightjump = al_load_bitmap( "rightjump.png");
    GAME.leftjump = al_load_bitmap( "leftjump.png");
    GAME.brick = al_load_bitmap( "brick.jpg");
    GAME.gthorn = al_load_bitmap( "gthorn.png");
    MONSTER.monster[0] = al_load_bitmap( "monster.png");
    MONSTER.monster[1] = al_load_bitmap( "monster2.png");
    MONSTER2.monster[0] = al_load_bitmap( "monster.png");
    MONSTER2.monster[1] = al_load_bitmap( "monster2.png");
    MONSTER3.rocket = al_load_bitmap( "rocket.png");
    MONSTER3.superman= al_load_bitmap( "superman.png");
    GAME.barD_x = SCREEN_W / 2; /* give aming its initial X-coordinate */

    while(1)
    {
        // al_get_keyboard_state(&KBstate);
        al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            break;
        // moveAming(); /* move the paddles */
        al_draw_bitmap(GAME.brick,GAME.x,GAME.y,0);
        al_draw_bitmap(GAME.brick,150,440,0);
        al_draw_bitmap(GAME.brick,200,440,0);
        al_draw_bitmap(GAME.brick,250,440,0);
        al_draw_bitmap(GAME.brick,300,440,0);
        //move aming
        moveAming(&GAME);
        //monster
        monster(&MONSTER,&GAME);
        monster(&MONSTER2,&GAME);
        monsterVertical(&MONSTER3,&GAME);
       /* printf("ym=%d\n",&MONSTER3.ym);
        printf("xm=%d\n",&MONSTER3.xm);*/
       // invisibleblock(&GAME,100,440);
        //groundthorn
        groundthorn(&GAME,100,440);
        groundthorn(&GAME,200,440);
        //groundthorn(&GAME,300,440);
        printf(" %d\n",GAME.life);

        al_rest(0.009);

        /* display */
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0));

        /* Clear the complete target bitmap, but confined by the clipping rectangle. */
    }
    for (int i=0;i<2;i++)
    al_destroy_bitmap( GAME.right[i]);
    for (int i=0;i<2;i++)
    al_destroy_bitmap( GAME.left[i]);
    // al_destroy_display();
    al_destroy_bitmap( GAME.rightjump);
    al_destroy_bitmap( GAME.leftjump);
    // al_destroy_display( display); /* destroy the display */
    al_destroy_bitmap( GAME.brick);
    al_destroy_bitmap( GAME.gthorn);
    al_destroy_display( GAME.display); /* destroy the display */
    al_destroy_bitmap( MONSTER3.rocket);
    al_destroy_bitmap( MONSTER3.superman);
    for (int i=0;i<2;i++)
    al_destroy_bitmap( MONSTER.monster[i]);
    for (int i=0;i<2;i++)
    al_destroy_bitmap( MONSTER2.monster[i]);

    return 0;
} /* end function main */
