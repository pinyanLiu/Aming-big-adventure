#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

/* symbolic constants for the ball¡¦s possible directions */
#define PADDLE_MOVE 3
#define SCREEN_W  500
#define SCREEN_H  500

typedef struct GAME
{
    int barD_x;
    int barD_y;
    int x;
    int y;
    //int x=100,y=440;
    // bool jump = false;
    bool jump;
    // float jumpSpeed = 15;
    float jumpSpeed;
    // float velX = 0, velY = 0;
    float velX;
    float velY;
    // const float gravity = 1;
    float gravity;
    // const int groundHeight = 545;
    int groundHeight;
    float step;
    int block;

    ALLEGRO_KEYBOARD_STATE KBstate;
    // ALLEGRO_BITMAP *bar1 = NULL; /* pointer to the bar's image bitmap */
    ALLEGRO_BITMAP *right1;
    ALLEGRO_BITMAP *right2;
    ALLEGRO_BITMAP *left1;
    ALLEGRO_BITMAP *left2;

    //ALLEGRO_BITMAP *brick = NULL;
    ALLEGRO_BITMAP *brick;
    ALLEGRO_BITMAP *gthorn;

   /* ALLEGRO_BITMAP* question = NULL ;//問號
    ALLEGRO_BITMAP* pipeshort = NULL ;//短水管
    ALLEGRO_BITMAP* pipelong = NULL ;//長水管
    ALLEGRO_BITMAP* cloud = NULL ;//雲朵
    ALLEGRO_BITMAP* cloudthorn = NULL ;//刺雲
    ALLEGRO_BITMAP* grass = NULL ;//草
    ALLEGRO_BITMAP* grassthorn = NULL ;//刺草
    ALLEGRO_BITMAP* pill = NULL ;//藍色小藥丸
    ALLEGRO_BITMAP* pillfake = NULL ;//假的藍色小藥丸
    ALLEGRO_BITMAP* rocket = NULL ;//紫色內褲
    ALLEGRO_BITMAP* gaygay = NULL ;//潘玉祥
    ALLEGRO_BITMAP* topthorn = NULL ;//頭頂刺
    ALLEGRO_BITMAP* truehere = NULL ;//真的在這
    ALLEGRO_BITMAP* truethorn = NULL ;//有刺的真的在這
    ALLEGRO_BITMAP* rocketup = NULL ;//火箭從下上來
    ALLEGRO_BITMAP* nonthink = NULL ;//
    ALLEGRO_BITMAP* trustyourself = NULL ;//相信自己
    ALLEGRO_BITMAP* groundthorn = NULL ;//地刺
    ALLEGRO_BITMAP* h = NULL ;
    ALLEGRO_BITMAP* flag = NULL ;//儲存點*/

     ALLEGRO_BITMAP* background  ;
   /* ALLEGRO_BITMAP* background2 = NULL ;//2和3換關的時候才會用到
    ALLEGRO_BITMAP* background3 = NULL ;//場景*/
    // ALLEGRO_DISPLAY *display = NULL;/* pointer to display */
    ALLEGRO_DISPLAY *display;
}g;

typedef struct MONSTER
{
ALLEGRO_BITMAP *monster;
ALLEGRO_BITMAP *monster2;
int barD_x;
int barD_y;
int xo; //ming at the position-xo monster start walking
int yo;
int xm;//monster position
int ym;

}m;
#endif
