#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"
#include "header.h"

int main( void )
{
    int a;//迴圈用
    int mode=1;//mode=1 game introduction,mode=2 game start window,mode=3 staff,mode=4 operation,mode=5 return 0
    int mode2=0;//the page in mode two
    int run=1;//run=0 game over
    int x=0,y=0;//the axis of mouse
    int xn=1000,yn=1000;
    int i=0,j=0;//counter
    int q=0,w=0,e=0,r=0;//var
    g GAME;
    m MONSTER;
    int array_high[11];
    int array_dead[11];
    /*mv mapvalue;//定義地圖陣列
    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();
    al_install_mouse();
    al_init_ttf_addon();

    //int a;//the var of while
    // Initial game structure
    gameStructInit(&GAME,&MONSTER);
    GAME.pongFont = NULL;
    // display = al_create_display(SCREEN_W, SCREEN_H);
    GAME.display = al_create_display(SCREEN_W, SCREEN_H);
    // bar1 = al_load_bitmap( "bar1.jpg"); /* load the bar bitmap */
    GAME.right[0]= al_load_bitmap( "right1.png");
    GAME.right[1]= al_load_bitmap( "right2.png");
    GAME.left[0]= al_load_bitmap( "left1.png");
    GAME.left[1]= al_load_bitmap( "left2.png");
    GAME.rightjump = al_load_bitmap( "rightjump.png");
    GAME.leftjump = al_load_bitmap( "leftjump.png"); /* load the bar bitmap */
    // barD_x = SCREEN_H / 2; /* give right paddle its initial X-coordinate */
    GAME.brick = al_load_bitmap( "brick.jpg");
    GAME.gthorn = al_load_bitmap( "gthorn.png");
    GAME.background =  al_load_bitmap( "background.jpg");
    GAME.background2=  al_load_bitmap( "background2.jpg");
    GAME.background3=  al_load_bitmap( "background3.jpg");

    GAME.Dead =al_load_bitmap("dead.jpg");//死亡

    GAME.question = al_load_bitmap( "question.jpg");//問號
    GAME.pipeshort = al_load_bitmap( "pipeshort.png");//短水管
    GAME.pipelong = al_load_bitmap( "pipelong.png"); ;//長水管
    GAME.cloud = al_load_bitmap("cloud.png");//雲朵
    GAME.cloudthorn = al_load_bitmap("cloudthorn.png") ;//刺雲
    GAME.grass = al_load_bitmap("grass.png");//草
    GAME.grassthorn = al_load_bitmap("grassthorn.png");//刺草
    GAME.pill = al_load_bitmap("pill.png");//藍色小藥丸
    GAME.pillfake =al_load_bitmap("pillfake.png");//假的藍色小藥丸
    GAME.rocket = al_load_bitmap("rocket.png");//紫色內褲
    GAME.gaygay = al_load_bitmap("gaygay.png");//潘玉祥
    GAME.topthorn = al_load_bitmap("topthorn.png");//頭頂刺
    GAME.truehere = al_load_bitmap("truehere.png");//真的在這
    GAME.truethorn = al_load_bitmap("truethorn.png");//有刺的真的在這
    GAME.rocketup = al_load_bitmap("rocketup.png");//火箭從下上來
    GAME.nonthink = al_load_bitmap("nonthink.png");//
    GAME.trustyourself = al_load_bitmap("trustyourself.png");//相信自己
    GAME.groundthorn = al_load_bitmap("groundthorn.png");//地刺
    GAME.h = al_load_bitmap("h.png");
    GAME.flag = al_load_bitmap("flag.png");//儲存點*/
    GAME.Empty = al_load_bitmap("empty.png");//看不見的磚塊

    GAME.startpage = al_load_bitmap( "startpage.png");
    GAME.d1page1 = al_load_bitmap( "d1page1.png");
    GAME.d1page2 = al_load_bitmap( "d1page2.png");
    GAME.d1page3 = al_load_bitmap( "d1page3.png");
    GAME.d2page = al_load_bitmap( "d2page.png");
    GAME.d3page1 = al_load_bitmap( "d3page1.png");
    GAME.d3page2 = al_load_bitmap( "d3page2.png");
    GAME.P1 = al_load_bitmap( "P1.png");
    GAME.P2 = al_load_bitmap( "P2.png");
    GAME.P3 = al_load_bitmap( "P3.png");
    GAME.NEXTPAGE = al_load_bitmap( "NEXTPAGE.png");
    GAME.OPERATIONS = al_load_bitmap( "OPERATIONS.png");
    GAME.stafflist = al_load_bitmap( "stafflist.png");
    GAME.START = al_load_bitmap( "START.png");
    GAME.STAFF = al_load_bitmap( "STAFF.png");
    GAME.OPERATION= al_load_bitmap( "OPERATION.png");
    GAME.BACKTOHOMEPAGE = al_load_bitmap( "BACKTOHOMEPAGE.png");
    GAME.NEXTPAGE = al_load_bitmap( "NEXTPAGE.png");


    MONSTER.monster[0] = al_load_bitmap( "monster.png");
    MONSTER.monster[1] = al_load_bitmap( "monster2.png");

    GAME.pongFont = al_load_ttf_font("ARCHRISTY.ttf", 20, 0); /* load the FONT file */

    GAME.barD_x = 0; /* give right paddle its initial X-coordinate */
    int map_array[68] = {1,1,1,1,8,52,13,10,10,2,19,4,3,2,1,1,1,5,5,7,1,0,0,0,1,1,12,1,13,8,8,1,6,6,1,1,1,1,1,6,16,1,0,0,0,1,46,5,15,1,1,1,17,17,18,17,1,1,1,1,1,1,20,1,1,1,21};
    int map_array2[68] ={1,1,23,23,22,22,23,23,0,0,7,1,1,1,0,0,0,1,7,1,1,48,46,2,0,0,26,27,28,28,29,29,28,40,30,30,1,31,1,1,1,1,48,48,48,1,1,32,1,1,1,21};
    int map_array3[80] = {49,50,50,50,50,50,50,50,50,50,53,1,1,1,1,1,34,34,35,50,34,34,34,34,34,0,34,34,34,34,34,34,36,51,0,0,37,0,0,37,43,0,0,39,0,0,34,34,34,34,41,41,42,41,34,34,34,34,34,44,50,50,34,34,34,34,0,21};
    while(run){
        al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                mode = 5;
        while(mode==1)
        {
            /*al_get_keyboard_state(&GAME.KBstate);
            // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
               mode=5;*/
            al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                break;
            i=0;
            j=0;
            al_draw_bitmap(GAME.startpage,0,0,0);
            al_draw_bitmap(GAME.START,205,190,0);
            al_draw_bitmap(GAME.OPERATION,205,240,0);
            al_draw_bitmap(GAME.STAFF,205,290,0);
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
                    if(x==205+i)
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
        while(mode==2)
        {
            //show first page
            while(mode2==0)
            {
                al_draw_bitmap(GAME.d1page1,0,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                        if(x==375+i)
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
                al_draw_bitmap(GAME.d1page2,0,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                        if(x==375+i)
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
                al_draw_bitmap(GAME.d1page3,0,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                        if(x==375+i)
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
            while(mode2 == 3)
            {
                //yumin put the game main stage1 here
            while(GAME.life != 0){
            // al_get_keyboard_state(&KBstate);
            al_get_keyboard_state(&GAME.KBstate);
            // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            break;
            while(run)
            {
            // al_get_keyboard_state(&KBstate);
            al_get_keyboard_state(&GAME.KBstate);
            // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                break;
            // moveAming(); /* move the paddles */
            al_draw_bitmap(GAME.background,0,0,0);//背景

            int*map = (int*) malloc(sizeof(int)*68);
            if(GAME.mapcontral == 1)
            {
                for(a = 0;a<11;a++){
                    map[a] = map_array[a+GAME.block];
            }
            al_draw_bitmap(GAME.background,0,0,0);//背景
            }//讀取地圖1
            for(a=0;a<11;a++){
                map_display(map[a],a,&GAME,&MONSTER);
            }//顯示地圖
            for(a = 0;a<11;a++){
            array_high[a] = groundhigh(map[a],&GAME);
            }//紀錄高度
            moveAming(&GAME,array_high,map);
            map_move(&GAME);
            /*for(i = 0;i<11;i++){
            hitbrick(&GAME,map[i],i);
            }*/

            //死亡判定
            for(a = 0;a<11;a++){
            if(map[a] == 21){
            GAME.pass = pass(&GAME,a);}
            if(GAME.pass == 1)break;
            }//過關判斷
            peopledisplay(&GAME);
            deadway(&GAME,&MONSTER,map);
            //al_draw_bitmap( GAME.left[], GAME.barD_x,GAME.barD_y, 0);
            al_rest(0.01);

            al_draw_textf( GAME.pongFont, al_map_rgb(0, 0, 0), 50, 50, -1, "life : %d", GAME.life);//顯示生命數
            /* display */
            al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));

            if(GAME.dead == true ){
                break;
            }
            if(GAME.pass != 0){
                GAME.mapcontral++;
                break;
            }//換關
        /* Clear the complete target bitmap, but confined by the clipping rectangle. */
            }//遊戲內決定生死
            al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                break;
            if(GAME.dead == true){savepoint(&GAME);}
            if(GAME.pass != 0){choosemap(&GAME);}
            al_rest(1);
            if (GAME.mapcontral == 2) mode2=4; break;
            if(GAME.life == 0){mode = 5;}
            }//一輪遊戲的生死
            if(GAME.life == 0){mode = 1;break;}
        }       /* Clear the complete target bitmap, but confined by the clipping rectangle. */

        while(mode2==4)
            {
                al_draw_bitmap(GAME.d2page,0,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                        if(x==375+i)
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
            while(mode2==5)
            {
                //yumin put the game main stage2 here
                while(GAME.life != 0){
                // al_get_keyboard_state(&KBstate);
                al_get_keyboard_state(&GAME.KBstate);
                // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
                if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                    break;
                    while(1)
                    {
                    // al_get_keyboard_state(&KBstate);
                    al_get_keyboard_state(&GAME.KBstate);
                    // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
                    if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                    break;
                    // moveAming(); /* move the paddles */
                    al_draw_bitmap(GAME.background2,0,0,0);//背景
                    int*map = (int*) malloc(sizeof(int)*68);
                    if(GAME.mapcontral == 2)
                    {
                    for(a = 0;a<11;a++){
                    map[a] = map_array2[a+GAME.block];
                    }
                    al_draw_bitmap(GAME.background,0,0,0);//背景
                    }//讀取地圖2

                    for(a=0;a<11;a++){
                    map_display(map[a],a,&GAME,&MONSTER);
                    }//顯示地圖


                    for(a = 0;a<11;a++){
                    array_high[a] = groundhigh(map[a],&GAME);
                    }//紀錄高度
                    moveAming(&GAME,array_high,map);
                    map_move(&GAME);
                    /*for(i = 0;i<11;i++){
                    hitbrick(&GAME,map[i],i);
                    }*/

                    for(a = 0;a<11;a++){
                    if(map[a] == 21){
                    GAME.pass = pass(&GAME,a);}
                    if(GAME.pass == 1)break;
                    }//過關判斷
                    peopledisplay(&GAME);
                    deadway(&GAME,&MONSTER,map);

                    //死亡判定
                    //al_draw_bitmap( GAME.left[], GAME.barD_x,GAME.barD_y, 0);
                    al_rest(0.01);
                    al_draw_textf( GAME.pongFont, al_map_rgb(0, 0, 0), 50, 50, -1, "life : %d", GAME.life);//顯示生命數
                    /* display */

                    al_flip_display(); /* Wait for the beginning of a vertical retrace. */
                    al_clear_to_color(al_map_rgb(0,0,0));
                    if(GAME.dead == true ){
                    break;
                    }
                    if(GAME.pass != 0){
                    GAME.mapcontral++;
                    break;
                    }//換關
                    /* Clear the complete target bitmap, but confined by the clipping rectangle. */
                    }//遊戲內決定生死
                    al_get_keyboard_state(&GAME.KBstate);
                    // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
                    if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                    break;
                    if(GAME.dead == true){savepoint(&GAME);}
                    if(GAME.pass != 0){choosemap(&GAME);}
                    al_rest(1);
                    if(GAME.mapcontral == 3){ mode2 = 6;
                    break;}
                    if(GAME.life == 0){mode = 5;}
                    }//一輪遊戲的生死
                if(GAME.life == 0){mode = 1;
                        break;}
                }       /* Clear the complete target bitmap, but confined by the clipping rectangle. */



        //show third page
        while(mode2==6)
        {
            al_draw_bitmap(GAME.d3page1,0,0,0);
            al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                    if(x==375+i)
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
            al_draw_bitmap(GAME.d3page2,0,0,0);
            al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                    if(x==375+i)
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
        while(mode2 == 8)
        {
            //yumin put the game main stage3 here
            while(GAME.life != 0){
            // al_get_keyboard_state(&KBstate);
            al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
            if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
                break;
        while(1)
        {
        // al_get_keyboard_state(&KBstate);
        al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            break;
        // moveAming(); /* move the paddles
        al_draw_bitmap(GAME.background,0,0,0);//背景
        int*map = (int*) malloc(sizeof(int)*68);
        if(GAME.mapcontral == 3)
        {
            for(a = 0;a<11;a++){
                map[a] = map_array3[a+GAME.block];
            }
        al_draw_bitmap(GAME.background3,0,0,0);//背景
        }//讀取地圖3

        for(a=0;a<11;a++){
            map_display(map[a],a,&GAME,&MONSTER);
        }//顯示地圖


        for(a = 0;a<11;a++){
            array_high[a] = groundhigh(map[a],&GAME);
        }//紀錄高度
        moveAming(&GAME,array_high,map);
        map_move(&GAME);
        /*for(i = 0;i<11;i++){
        hitbrick(&GAME,map[i],i);
        }*/
        //死亡判定
        for(a = 0;a<11;a++){
        if(map[a] == 21){
        GAME.pass = pass(&GAME,a);}

        if(GAME.pass == 1)break;
        }//過關判斷
        peopledisplay(&GAME);
       deadway(&GAME,&MONSTER,map);
       //al_draw_bitmap( GAME.left[], GAME.barD_x,GAME.barD_y, 0);
       al_rest(0.01);
        al_draw_textf( GAME.pongFont, al_map_rgb(0, 0, 0), 50, 50, -1, "life : %d", GAME.life);//顯示生命數
        // display
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0));
        if(GAME.pass != 0){
            GAME.mapcontral++;
            break;
        }//換關
         if(GAME.dead == true ){
            break;
         }//死亡
         //Clear the complete target bitmap, but confined by the clipping rectangle.
        }//遊戲內決定生死
        al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            break;
        if(GAME.dead == true){savepoint(&GAME);}
        if(GAME.mapcontral == 4){mode2 = 9;break;}
        if(GAME.life == 0){break;}
        al_rest(1);
            }
        if(GAME.life == 0){break;}
        }       /* Clear the complete target bitmap, but confined by the clipping rectangle. */

            while(mode2==9)
            {
                al_draw_bitmap(GAME.P1,0,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
                al_get_mouse_state(&GAME.MSstate);
                if(al_mouse_button_down(&GAME.MSstate,1) == 1)
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
                        if(x==375+i)
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

                        mode2=10;
                    }
                }
                 al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));
            }
                while(mode2==10)
                {
                al_draw_bitmap(GAME.P2,0,0,0);
                al_draw_bitmap(GAME.NEXTPAGE,375,400,0);
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
                        if(x==375+i)
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

                        mode2=11;
                    }
                }
                 al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));
                }
                while(mode2==11)
                {
                al_draw_bitmap(GAME.P3,0,0,0);
                al_draw_bitmap(GAME.BACKTOHOMEPAGE,375,400,0);
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
                        if(x==375+i)
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
                        mode = 1;
                        mode2 = 12;
                    }
                }
                 al_flip_display(); /* Wait for the beginning of a vertical retrace. */
            al_clear_to_color(al_map_rgb(0,0,0));
                }
        if(GAME.life == 0){
        al_draw_bitmap(GAME.Dead,0,0,0);
        al_flip_display();
        mode = 1;
        al_rest(1);
        al_clear_to_color(al_map_rgb(0,0,0));
        }
    }
    while(mode==3)
    {
        al_draw_bitmap(GAME.stafflist,0,0,0);
        al_draw_bitmap(GAME.BACKTOHOMEPAGE,375,400,0);

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
                if(x==375+i)
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


        al_draw_bitmap(GAME.OPERATIONS,0,0,0);
        al_draw_bitmap(GAME.BACKTOHOMEPAGE,375,400,0);

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
                if(x==375+i)
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
    while(mode == 5){
        al_destroy_bitmap( GAME.right[0]);
    al_destroy_bitmap( GAME.right[1]);
    al_destroy_bitmap( GAME.left[0]);
    al_destroy_bitmap( GAME.left[1]);
    al_destroy_bitmap( GAME.leftjump);
    al_destroy_bitmap( GAME.rightjump);
    // al_destroy_display( display); /* destroy the display */
    al_destroy_bitmap( GAME.brick);
    al_destroy_bitmap( GAME.gthorn);
    al_destroy_display( GAME.display); /* destroy the display */
    al_destroy_bitmap( MONSTER.monster[0]);
    al_destroy_bitmap( MONSTER.monster[1]);
    al_destroy_bitmap(GAME.background);
    al_destroy_bitmap(GAME.background2);
    al_destroy_bitmap(GAME.background3);
    al_destroy_bitmap(GAME.cloud);
    al_destroy_bitmap(GAME.cloudthorn);
    al_destroy_bitmap(GAME.gaygay);
    al_destroy_bitmap(GAME.grass);
    al_destroy_bitmap(GAME.grassthorn);
    al_destroy_bitmap(GAME.groundthorn);
    al_destroy_bitmap(GAME.h);
    al_destroy_bitmap(GAME.nonthink);
    al_destroy_bitmap(GAME.pill);
    al_destroy_bitmap(GAME.pillfake);
    al_destroy_bitmap(GAME.pipelong);
    al_destroy_bitmap(GAME.pipeshort);
    al_destroy_bitmap(GAME.question);
    al_destroy_bitmap(GAME.rocket);
    al_destroy_bitmap(GAME.rocketup);
    al_destroy_bitmap(GAME.topthorn);
    al_destroy_bitmap(GAME.truehere);
    al_destroy_bitmap(GAME.trustyourself);
    al_destroy_bitmap(GAME.Empty);
    al_destroy_bitmap(GAME.Dead);
    al_destroy_bitmap( GAME.startpage);
    al_destroy_bitmap( GAME.d1page1);
    al_destroy_bitmap( GAME.d1page2);
    al_destroy_bitmap( GAME.d1page3);
    al_destroy_bitmap( GAME.d2page);
    al_destroy_bitmap( GAME.d3page1);
    al_destroy_bitmap( GAME.d3page2);
    al_destroy_bitmap( GAME.P1);
    al_destroy_bitmap( GAME.P2);
    al_destroy_bitmap( GAME.P3);
    al_destroy_bitmap( GAME.START);
    al_destroy_bitmap( GAME.OPERATION);
    al_destroy_bitmap( GAME.NEXTPAGE);
    al_destroy_bitmap( GAME.STAFF);
    al_destroy_bitmap( GAME.BACKTOHOMEPAGE);
    al_destroy_font(GAME.pongFont);

    al_destroy_bitmap( GAME.OPERATIONS);
    al_destroy_bitmap( GAME.NEXTPAGE);
    return 0;
    }
    if(GAME.mapcontral == 4){mode = 1;}
    gameStructInit(&GAME,&MONSTER);
     mode2=0;//the page in mode two
     run=1;//run=0 game over
     x=0,y=0;//the axis of mouse
     xn=1000,yn=1000;
     i=0,j=0;//counter
     q=0,w=0,e=0,r=0;//var


} /* end function main */

}
