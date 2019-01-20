#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"
#include "header.h"

int main( void )
{
    g GAME;
    m MONSTER,MONSTER2;
    gameStructInit(&GAME,&MONSTER,&MONSTER2);
    int mode=1;//mode=1 game introduction,mode=2 game start window,mode=3 staff,mode=4 operation,mode=5 return 0
    int mode2=0;//the page in mode two
    int run=1;//run=0 game over
    int x=0,y=0;//the axis of mouse
    int xn=1000,yn=1000;
    int i=0,j=0;//counter
    int q=0,w=0,e=0,r=0;//var
    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_mouse();
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();
    //int a;//the var of while
    // Initial game structure

    // display = al_create_display(SCREEN_W, SCREEN_H);
    GAME.display = al_create_display(SCREEN_W, SCREEN_H);
    //load the bitmap
    GAME.startpage = al_load_bitmap( "startpage.png");
    GAME.d1page1 = al_load_bitmap( "d1page1.png");
    GAME.d1page2 = al_load_bitmap( "d1page2.png");
    GAME.d1page3 = al_load_bitmap( "d1page3.png");
    GAME.d2page = al_load_bitmap( "d2page.png");
    GAME.d3page1 = al_load_bitmap( "d3page1.png");
    GAME.d3page2 = al_load_bitmap( "d3page2.png");
    GAME.NEXTPAGE = al_load_bitmap( "NEXTPAGE.png");
    GAME.OPERATIONS = al_load_bitmap( "OPERATIONS.png");
    GAME.stafflist = al_load_bitmap( "stafflist.png");
    GAME.START = al_load_bitmap( "START.png");
    GAME.STAFF = al_load_bitmap( "STAFF.png");
    GAME.OPERATION= al_load_bitmap( "OPERATION.png");
    GAME.BACKTOHOMEPAGE = al_load_bitmap( "BACKTOHOMEPAGE.png");
    GAME.NEXTPAGE = al_load_bitmap( "NEXTPAGE.png");
    GAME.right[0]= al_load_bitmap( "right1.png");
    GAME.right[1]= al_load_bitmap( "right2.png");
    GAME.left[0]= al_load_bitmap( "left1.png");
    GAME.left[1]= al_load_bitmap( "left2.png");
    GAME.rightjump = al_load_bitmap( "rightjump.png");
    GAME.leftjump = al_load_bitmap( "leftjump.png");
    GAME.NEXTPAGE = al_load_bitmap( "NEXTPAGE.png");
    GAME.brick = al_load_bitmap( "brick.jpg");
    GAME.gthorn = al_load_bitmap( "gthorn.png");
    MONSTER.monster[0] = al_load_bitmap( "monster.png");
    MONSTER.monster[1] = al_load_bitmap( "monster2.png");
    MONSTER2.monster[0] = al_load_bitmap( "monster.png");
    MONSTER2.monster[1] = al_load_bitmap( "monster2.png");
    GAME.barD_x = SCREEN_W / 2; /* give aming its initial X-coordinate */
    //all game
    while(run)
    {

        //game introduction
        while(mode==1)
        {
            /*al_get_keyboard_state(&GAME.KBstate);
            // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
               mode=5;*/
            i=0;
            j=0;
            al_draw_bitmap(GAME.startpage,75,0,0);
            al_draw_bitmap(GAME.START,280,190,0);
            al_draw_bitmap(GAME.OPERATION,280,240,0);
            al_draw_bitmap(GAME.STAFF,280,290,0);

            al_get_mouse_state(&GAME.MSstate);
            if(al_mouse_button_down(&GAME.MSstate,1)==1)
            {

                x=al_get_mouse_state_axis(&GAME.MSstate,0);
                y=al_get_mouse_state_axis(&GAME.MSstate,1);

                while(1)
                {
                    al_get_mouse_state(&GAME.MSstate);
                    if(al_mouse_button_down(&GAME.MSstate,1)==0)
                    {
                        xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                        yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                        break;
                    }
                }
                //use mouse to choose start,operation,staff
                for(i=0; i<=100; i++)
                {
                    if(x==280+i)
                    {
                        q=1;


                    }
                }
                for(j=0; j<=50; j++)
                {
                    if(y==240+j)
                        w=1;
                    if(y==290+j)
                        w=2;
                    if(y==190+j)
                        w=3;
                }

                if(w==q)

                    mode=4;
                if(w==2*q)

                    mode=3;
                if(w==3*q)

                    mode=2;
            }

            al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));

        }

        //game start window
        while(mode==2)
        {
            //show first page
            while(mode2==0)
            {
                al_draw_bitmap(GAME.d1page1,75,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,450,400,0);
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1)==1)
                {

                    x=al_get_mouse_state_axis(&GAME.MSstate,0);
                    y=al_get_mouse_state_axis(&GAME.MSstate,1);

                    while(1)
                    {
                        al_get_mouse_state(&GAME.MSstate);
                        if(al_mouse_button_down(&GAME.MSstate,1)==0)
                        {
                            xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                            yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                            break;
                        }
                    }
                    //use mouse to press NEXTPAGE
                    for(i=0; i<=100; i++)
                    {
                        if(x==450+i)
                            e=1;
                    }
                    for(j=0; j<=50; j++)
                    {
                        if(y==400+j)
                            r=1;
                    }

                    if(e==r)
                    {
                        e=0;
                        r=0;

                        mode2=1;
                    }
                }
                al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                al_clear_to_color(al_map_rgb(0,0,0));
            }




            while(mode2==1)
            {
                al_draw_bitmap(GAME.d1page2,75,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,450,400,0);
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1)==1)
                {

                    x=al_get_mouse_state_axis(&GAME.MSstate,0);
                    y=al_get_mouse_state_axis(&GAME.MSstate,1);

                    while(1)
                    {
                        al_get_mouse_state(&GAME.MSstate);
                        if(al_mouse_button_down(&GAME.MSstate,1)==0)
                        {
                            xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                            yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                            break;
                        }
                    }
                    //use mouse to press NEXTPAGE
                    for(i=0; i<=100; i++)
                    {
                        if(x==450+i)
                            e=1;
                    }
                    for(j=0; j<=50; j++)
                    {
                        if(y==400+j)
                            r=1;
                    }

                    if(e==r)
                    {
                        e=0;
                        r=0;

                        mode2=2;
                    }
                }
                al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                al_clear_to_color(al_map_rgb(0,0,0));
            }


            while(mode2==2)
            {
                al_draw_bitmap(GAME.d1page3,75,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,450,400,0);
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1)==1)
                {

                    x=al_get_mouse_state_axis(&GAME.MSstate,0);
                    y=al_get_mouse_state_axis(&GAME.MSstate,1);

                    while(1)
                    {
                        al_get_mouse_state(&GAME.MSstate);
                        if(al_mouse_button_down(&GAME.MSstate,1)==0)
                        {
                            xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                            yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                            break;
                        }
                    }
                    //use mouse to press NEXTPAGE
                    for(i=0; i<=100; i++)
                    {
                        if(x==450+i)
                            e=1;
                    }
                    for(j=0; j<=50; j++)
                    {
                        if(y==400+j)
                            r=1;
                    }

                    if(e==r)
                    {
                        e=0;
                        r=0;
                        mode2=3;

                    }

                }
                al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                al_clear_to_color(al_map_rgb(0,0,0));
            }

            //game start loop
            while(mode2==3)
            {
                //yumin put the game main stage1 here

                // al_get_keyboard_state(&KBstate);
                al_get_keyboard_state(&GAME.KBstate);
                // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
                if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                {

                    mode=1;
                    break;
                }
                //WHILE PLAYING THE GAME,PRESS ESC CAN LEAD YOU TO THE INTRODUCTION PAGE
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
                //groundthorn
                groundthorn(&GAME,100,440);
                groundthorn(&GAME,200,440);
                groundthorn(&GAME,300,440);
                al_rest(0.009);


                /* display */
                al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                al_clear_to_color(al_map_rgb(0,0,0));
                /* Clear the complete target bitmap, but confined by the clipping rectangle. */
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_DOWN))

                mode2=4;

            }

            //show second page
            while(mode2==4)
            {
                al_draw_bitmap(GAME.d2page,75,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,450,400,0);
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1)==1)
                {

                    x=al_get_mouse_state_axis(&GAME.MSstate,0);
                    y=al_get_mouse_state_axis(&GAME.MSstate,1);

                    while(1)
                    {
                        al_get_mouse_state(&GAME.MSstate);
                        if(al_mouse_button_down(&GAME.MSstate,1)==0)
                        {
                            xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                            yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                            break;
                        }
                    }
                    //use mouse to press NEXTPAGE
                    for(i=0; i<=100; i++)
                    {
                        if(x==450+i)
                            e=1;
                    }
                    for(j=0; j<=50; j++)
                    {
                        if(y==400+j)
                            r=1;
                    }

                    if(e==r)
                    {
                        e=0;
                        r=0;

                        mode2=5;
                    }
                }
                al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                al_clear_to_color(al_map_rgb(0,0,0));
            }
            //game stage2 start loop
            while(mode2=5)
            {
                //yumin put the game main stage2 here
                // al_get_keyboard_state(&KBstate);
                al_get_keyboard_state(&GAME.KBstate);
                // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
                if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                {

                    mode=1;
                    break;
                }
                //WHILE PLAYING THE GAME,PRESS ESC CAN LEAD YOU TO THE INTRODUCTION PAGE
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
                //groundthorn
                groundthorn(&GAME,100,440);
                groundthorn(&GAME,200,440);
                groundthorn(&GAME,300,440);
                al_rest(0.009);


                /* display */
                al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                al_clear_to_color(al_map_rgb(0,0,0));
                if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_DOWN))
                    mode2=6;
            }       /* Clear the complete target bitmap, but confined by the clipping rectangle. */




        //show third page
        while(mode2==6)
        {
            al_draw_bitmap(GAME.d3page1,75,0,0);
            al_draw_bitmap(GAME.NEXTPAGE,450,400,0);
            al_get_mouse_state(&GAME.MSstate);
            if(al_mouse_button_down(&GAME.MSstate,1)==1)
            {

                x=al_get_mouse_state_axis(&GAME.MSstate,0);
                y=al_get_mouse_state_axis(&GAME.MSstate,1);

                while(1)
                {
                    al_get_mouse_state(&GAME.MSstate);
                    if(al_mouse_button_down(&GAME.MSstate,1)==0)
                    {
                        xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                        yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                        break;
                    }
                }
                //use mouse to press NEXTPAGE
                for(i=0; i<=100; i++)
                {
                    if(x==450+i)
                        e=1;
                }
                for(j=0; j<=50; j++)
                {
                    if(y==400+j)
                        r=1;
                }

                if(e==r)
                {
                    e=0;
                    r=0;

                    mode2=7;
                }
            }
            al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));
        }

        while(mode2==7)
        {
            al_draw_bitmap(GAME.d3page2,75,0,0);
            al_draw_bitmap(GAME.NEXTPAGE,450,400,0);
            al_get_mouse_state(&GAME.MSstate);
            if(al_mouse_button_down(&GAME.MSstate,1)==1)
            {

                x=al_get_mouse_state_axis(&GAME.MSstate,0);
                y=al_get_mouse_state_axis(&GAME.MSstate,1);

                while(1)
                {
                    al_get_mouse_state(&GAME.MSstate);
                    if(al_mouse_button_down(&GAME.MSstate,1)==0)
                    {
                        xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                        yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                        break;
                    }
                }
                //use mouse to press NEXTPAGE
                for(i=0; i<=100; i++)
                {
                    if(x==450+i)
                        e=1;
                }
                for(j=0; j<=50; j++)
                {
                    if(y==400+j)
                        r=1;
                }

                if(e==r)
                {
                    e=0;
                    r=0;

                    mode2=8;
                }
            }
            al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));
        }
        //game stage3 start loop
        while(mode2=8)
        {
            //yumin put the game main stage3 here
            // al_get_keyboard_state(&KBstate);
            al_get_keyboard_state(&GAME.KBstate);
            // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            {

                mode=1;
                break;
            }
            //WHILE PLAYING THE GAME,PRESS ESC CAN LEAD YOU TO THE INTRODUCTION PAGE
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
            //groundthorn
            groundthorn(&GAME,100,440);
            groundthorn(&GAME,200,440);
            groundthorn(&GAME,300,440);
            al_rest(0.009);

            /* display */
            al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));
        }       /* Clear the complete target bitmap, but confined by the clipping rectangle. */



    };

    //staff
    while(mode==3)
    {
        al_draw_bitmap(GAME.stafflist,75,0,0);
        al_draw_bitmap(GAME.BACKTOHOMEPAGE,450,400,0);

        al_get_mouse_state(&GAME.MSstate);
        if(al_mouse_button_down(&GAME.MSstate,1)==1)
        {

            x=al_get_mouse_state_axis(&GAME.MSstate,0);
            y=al_get_mouse_state_axis(&GAME.MSstate,1);

            while(1)
            {
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1)==0)
                {
                    xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                    yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                    break;
                }
            }
            //ues mouse to press BACKTOHOMEPAGE
            for(i=0; i<=100; i++)
            {
                if(x==450+i)
                    e=1;
            }
            for(j=0; j<=50; j++)
            {
                if(y==400+j)
                    r=1;
            }

            if(e==r)
            {
                e=0;
                r=0;

                mode=1;
            }
        }
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0));
    }






//operation
    while(mode==4)
    {


        al_draw_bitmap(GAME.OPERATIONS,75,0,0);
        al_draw_bitmap(GAME.BACKTOHOMEPAGE,450,400,0);

        al_get_mouse_state(&GAME.MSstate);
        if(al_mouse_button_down(&GAME.MSstate,1)==1)
        {

            x=al_get_mouse_state_axis(&GAME.MSstate,0);
            y=al_get_mouse_state_axis(&GAME.MSstate,1);

            while(1)
            {
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1)==0)
                {
                    xn=al_get_mouse_state_axis(&GAME.MSstate,0);
                    yn=al_get_mouse_state_axis(&GAME.MSstate,1);
                    break;
                }
            }
            //ues mouse to press BACKTOHOMEPAGE
            for(i=0; i<=100; i++)
            {
                if(x==450+i)
                    e=1;
            }
            for(j=0; j<=50; j++)
            {
                if(y==400+j)
                    r=1;
            }

            if(e==r)
            {
                e=0;
                r=0;


                mode=1;
            }
        }
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0));



    }




    while(mode==5)
    {
        al_destroy_bitmap( GAME.startpage);
        al_destroy_bitmap( GAME.d1page1);
        al_destroy_bitmap( GAME.d1page2);
        al_destroy_bitmap( GAME.d1page3);
        al_destroy_bitmap( GAME.d2page);
        al_destroy_bitmap( GAME.d3page1);
        al_destroy_bitmap( GAME.d3page2);
        al_destroy_bitmap( GAME.START);
        al_destroy_bitmap( GAME.OPERATION);
        al_destroy_bitmap( GAME.NEXTPAGE);
        al_destroy_bitmap( GAME.STAFF);
        al_destroy_bitmap( GAME.BACKTOHOMEPAGE);
        for (int i=0; i<2; i++)
            al_destroy_bitmap( GAME.right[i]);
        for (int i=0; i<2; i++)
            al_destroy_bitmap( GAME.left[i]);
        // al_destroy_display();
        al_destroy_bitmap( GAME.rightjump);
        al_destroy_bitmap( GAME.leftjump);
        // al_destroy_display( display); /* destroy the display */
        al_destroy_bitmap( GAME.brick);
        al_destroy_bitmap( GAME.gthorn);
        al_destroy_bitmap( GAME.gthorn);
        al_destroy_bitmap( GAME.OPERATIONS);
        al_destroy_bitmap( GAME.NEXTPAGE);
        al_destroy_display( GAME.display);/* destroy the display */
        for (int i=0; i<2; i++)
            al_destroy_bitmap( MONSTER.monster[i]);
        for (int i=0; i<2; i++)
            al_destroy_bitmap( MONSTER2.monster[i]);

        return 0;
    }
}
}/* end function main */
