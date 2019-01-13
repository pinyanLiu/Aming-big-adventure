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
    ALLEGRO_KEYBOARD_STATE KBstate;
    // ALLEGRO_BITMAP *bar1 = NULL; /* pointer to the bar's image bitmap */
    ALLEGRO_BITMAP *right1;
    ALLEGRO_BITMAP *right2;
    ALLEGRO_BITMAP *left1;
    ALLEGRO_BITMAP *left2;

    //ALLEGRO_BITMAP *brick = NULL;
    ALLEGRO_BITMAP *brick;
    ALLEGRO_BITMAP *gthorn;
    // ALLEGRO_DISPLAY *display = NULL;/* pointer to display */
    ALLEGRO_DISPLAY *display;
}g;

typedef struct MONSTER
{
ALLEGRO_BITMAP *monster;
ALLEGRO_BITMAP *monster2;

int xo; //ming at the position-xo monster start walking
int yo;
int xm;//monster position
int ym;

}m ;
#endif
