#include <stdlib.h>

#include "functionlist.h"

int groundhigh(int a,g* gPtr)
{
 if(a == 0){return 500;}
 if(a == 1){return 350;}
 if(a == 2){if(gPtr->barD_y <=210){return 200;}
             return 350;}
 if(a == 3){if(gPtr->barD_y <=210)return 200;
             return 350;}
 if(a == 4){if(gPtr->barD_y <=50)return 50;
            else if(gPtr->barD_y <= 200)return 200;
            else return 350;}
 if(a == 5){return 280;}
 if(a == 6){return 200;}
 if(a == 7){return 350;}
 if(a == 8){return 350;}
 if(a == 9){if(gPtr->barD_y <=250)return 250;else return 350;}
 if(a == 10){return 350;}
 if(a == 11){return 350;}
 if(a == 12){return 280;}
 if(a == 13){return 350;}
 if(a == 14){return 350;}
 if(a == 15){return 280;}
 if(a == 16){return 200;}
 if(a == 17){if(gPtr->barD_y <=210)return 200;else return 350;}
 if(a == 18){if(gPtr->barD_y <=210)return 200;else return 350;}
 if(a == 19){if(gPtr->barD_y<=100)return 100;else return 350;}
 if(a == 20){return 350;}
 if(a == 21){return 350;}
 if(a == 22){return 350;}
 if(a == 23){return 350;}
 if(a == 24){if(gPtr->barD_y <= 200)return 200;else return 350;}
 if(a == 25){return 350;}
 if(a == 26){if(gPtr->barD_y <= 200)return 200;else return 500;}
 if(a == 27){return 300;}
 if(a == 28){if(gPtr->barD_y <=100)return 100; else return 300;}
 if(a == 29){if(gPtr->barD_y <=100)return 100; else return 300;}
 if(a == 30){return 100;}
 if(a == 31){if(gPtr->barD_y<=150)return 150;else return 350;}
 if(a == 32){return 350;}
 if(a == 32){return 350;}
 if(a == 33){return 350;}
 if(a == 34){return 350;}
 if(a == 35){return 350;}
 if(a == 36){return 350;}
 if(a == 37){return 350;}
 if(a == 38){return 350;}
 if(a == 39){return 400;}
 if(a == 40){if(gPtr->barD_y<=100)return 100; else return 300;}
 if(a == 41){if(gPtr->barD_y<=200)return 200;else return 350;}
 if(a == 42){if(gPtr->barD_y<=200)return 200;else return 350;}
 if(a == 43){if(gPtr->barD_y<=200)return 200;else return 350;}
 if(a == 44){if(gPtr->barD_y<=100)return 100;else return 350;}
 if(a == 45){return 350;}
 if(a == 46){ return 350;}
 if(a == 47){ return 350;}
 if(a == 48){ return 350;}
 if(a == 49){ return 350;}
 if(a == 50){ return 350;}
 if(a == 51){ return 350;}
}

void moveAming(g* gPtr,int a[])
{

    if(gPtr->block == 0){
    gPtr->groundHeight = a[gPtr->barD_x/50];}//����צ�m�b��b����
    if(gPtr->block == 10){
        gPtr->groundHeight = a[gPtr->barD_x/50];//����צ�m�b��b����
    }
    if(gPtr->block<10&&gPtr->block>0){
        gPtr->groundHeight = a[gPtr->barD_x/50];//����צ�m��b���৹
    }

    // if (al_key_down(&KBstate, ALLEGRO_KEY_LEFT)) barD_x -= PADDLE_MOVE;
    if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_LEFT))
        gPtr->barD_x -= PADDLE_MOVE;
        if(gPtr->barD_y > a[gPtr->barD_x/50] )gPtr->barD_x += PADDLE_MOVE;

    // if (al_key_down(&KBstate, ALLEGRO_KEY_RIGHT)) barD_x += PADDLE_MOVE;
    if (al_key_down(&gPtr->KBstate, ALLEGRO_KEY_RIGHT))
         gPtr->barD_x += PADDLE_MOVE;
        if(gPtr->barD_y > a[gPtr->barD_x/50])gPtr->barD_x -= PADDLE_MOVE;
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
    if (gPtr->barD_x > 500)
        // barD_x =620; /* make sure the paddles don go off screen */
        gPtr->barD_x =500; /* make sure the paddles don go off screen */
}
/*void game(struct GAME* gamePtr)
{

}*/
void gameStructInit(g* gPtr,m*mPtr)
{
    gPtr->x=100;
    gPtr->y=350;//�_�l����
    gPtr->jump = false;
    gPtr->jumpSpeed = 20;
    gPtr->velX = 0;
    gPtr->velY = 0;
    gPtr->gravity = 1;
    gPtr->groundHeight = 350;//�a������
    gPtr->brick = NULL;
    gPtr->display = NULL;
    gPtr->step =0;//�a����ܻݭn
    gPtr->block =0;
    gPtr->life = 3;
    mPtr->xo=250;//monster will start move while aming is right here
    mPtr->yo=350;//�a������
    mPtr->xm=500;//location of monster
    mPtr->ym=350;//�a������
    mPtr->monster = NULL;
    mPtr->monster2 = NULL;
    //mvptr[11]->groundhigh =350;
   // mvptr[11]->locate_left = NULL;
    //mvptr[11]->locate_right = NULL;
}

