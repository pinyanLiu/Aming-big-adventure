#include <stdio.h>
#include <stdlib.h>

#include "functionlist.h"
#include "header.h"

int main( void )
{

    int i;//for迴圈用
    int j,z;//monster var
    int temp = 30;
    g GAME;
    m MONSTER;
    int array_high[11];
    int dead;//決定是否死掉
    /*mv mapvalue;//定義地圖陣列
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
    GAME.background =  al_load_bitmap( "background.jpg");

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
    GAME.flag = al_load_bitmap("flag.jpg");//儲存點*/

    MONSTER.monster = al_load_bitmap( "monster.png");
    MONSTER.monster2 = al_load_bitmap( "monster2.png");

    GAME.barD_x = 0; /* give right paddle its initial X-coordinate */
    int map_array[68] = {1,1,1,1,8,9,13,10,10,2,3,4,3,2,1,1,1,5,5,1,7,0,0,0,1,1,12,1,13,8,8,1,6,6,1,1,1,1,19,16,16,1,0,0,0,46,1,5,15,47,47,1,17,17,18,17,1,1,1,1,1,1,20,1,1,21};
    int map_array2[68] ={1,1,23,23,22,22,23,23,0,0,7,7,1,24,0,1,1,7,7,1,48,2,2,0,0,26,27,28,28,29,28,40,30,30,1,31,31,31,31,1,49,49,49,1,32,1,1,1,1,21};
    int map_array3[80] = {50,50,50,50,50,50,50,50,50,50,33,1,1,1,34,34,51,51,34,34,34,34,34,0,34,34,34,34,34,34,34,52,0,37,0,0,37,38,0,0,39,0,0,34,34,34,34,41,41,42,41,34,34,34,34,34,43,44,53,34,34,34,34,0,21};
    z = 1;
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
        al_draw_bitmap(GAME.background,0,0,0);//背景
        int*map = (int*) malloc(sizeof(int)*68);

        for(i = 0;i<11;i++){
            map[i] = map_array[i+GAME.block];
        }//讀取地圖
        for(i=0;i<11;i++){
            map_display(map[i],i,&GAME,&MONSTER);
        }//顯示地圖
        al_draw_bitmap(GAME.brick,GAME.x,GAME.y,0);
        for(i = 0;i<11;i++){
            array_high[i] = groundhigh(map[i],&GAME);
        }//紀錄高度
        moveAming(&GAME,array_high);
        map_move(&GAME);
        //monster
        if(z == 1){
        j= monster(&MONSTER,&GAME);
        if(j == 1){z++;} }
        if(j == 1){
        MONSTER.xm-=PADDLE_MOVE;
        al_draw_bitmap(MONSTER.monster,MONSTER.xm,MONSTER.ym,0);
        }

         dead = deadway(&GAME);
         if(dead == 0){
            break;
         }
        //死亡判定
        groundthorn(&GAME,100,350);
        groundthorn(&GAME,200,350);
       al_draw_bitmap( GAME.left1, GAME.barD_x,GAME.barD_y, 0);
       al_rest(0.01);

        /* display */
        al_flip_display(); /* Wait for the beginning of a vertical retrace. */
        al_clear_to_color(al_map_rgb(0,0,0));

        /* Clear the complete target bitmap, but confined by the clipping rectangle. */
    }//遊戲內決定生死
        al_get_keyboard_state(&GAME.KBstate);
        // if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE))
        if (al_key_down(&GAME.KBstate, ALLEGRO_KEY_ESCAPE))
            break;
        if(GAME.life != 0){
            if(GAME.block < 5){
            GAME.barD_x=0;
            GAME.barD_y =350;
            GAME.block = 0;
            GAME.step =0;}
            else
            GAME.barD_x=0;
            GAME.barD_y =350;
            GAME.block = 5;
            GAME.step =0;
        al_rest(1);
        }
    }//一輪遊戲的生死
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
    al_destroy_bitmap(GAME.background);
    return 0;
} /* end function main */
