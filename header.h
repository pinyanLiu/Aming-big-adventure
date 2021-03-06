#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

/* symbolic constants for the ball¡¦s possible directions */
#define PADDLE_MOVE 3
#define SCREEN_W  640
#define SCREEN_H  480

typedef struct GAME
{
    int barD_x;
    int barD_y;
    int cur;
    int ccount;
    int delay;
    int keydown;//judge if key down
    int x,xi;
    int y,yi;
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
    ALLEGRO_MOUSE_STATE MSstate;
    int life;
    bool dead;
    ALLEGRO_KEYBOARD_STATE KBstate;
    ALLEGRO_BITMAP *START;
    ALLEGRO_BITMAP *STAFF;
    ALLEGRO_BITMAP *stafflist;
    ALLEGRO_BITMAP *OPERATION;
    ALLEGRO_BITMAP *BACKTOHOMEPAGE;
    ALLEGRO_BITMAP *right[2];
    ALLEGRO_BITMAP *left[2];
    ALLEGRO_BITMAP *rightjump;
    ALLEGRO_BITMAP *leftjump;
    //ALLEGRO_BITMAP *brick = NULL;
    ALLEGRO_BITMAP *brick;
    ALLEGRO_BITMAP *gthorn;
    ALLEGRO_BITMAP *startpage;
    ALLEGRO_BITMAP *OPERATIONS;
    ALLEGRO_BITMAP *NEXTPAGE;
    ALLEGRO_BITMAP *d1page1;
    ALLEGRO_BITMAP *d1page2;
    ALLEGRO_BITMAP *d1page3;
    ALLEGRO_BITMAP *d2page;
    ALLEGRO_BITMAP *d3page1;
    ALLEGRO_BITMAP *d3page2;
    // ALLEGRO_DISPLAY *display = NULL;/* pointer to display */
    ALLEGRO_DISPLAY *display;
}g;

typedef struct
{
ALLEGRO_BITMAP *monster[2];
ALLEGRO_BITMAP *superman;
ALLEGRO_BITMAP *rocket;

int xo; //ming at the position-xo monster start walking
int yo;
int xm;//monster position
int ym;
int monsterMove;
int c;
int b;
}m;
#endif
