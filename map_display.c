#include <stdlib.h>

#include "functionlist.h"

void map_display(int a,int i,g* gPtr,m* mPtr){
    if(a == 1)
            {
            al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
             al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
            }
                if(a == 2){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                }
                if(a == 3){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->question,50*i-gPtr->step,250,0);
                }
                if(a == 4){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->question,50*i-gPtr->step,100,0);

                }
                if(a == 5){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pipeshort,50*i-gPtr->step-10,250,0);
                }
                if(a == 6){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pipelong,50*i-gPtr->step+10,200,0);
                }
                if(a == 7){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->grass,50*i-gPtr->step,350,0);
                }
                if(a == 8){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->grassthorn,50*i-gPtr->step,350,0);
                }
                if(a == 9){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->grassthorn,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->question,50*i-gPtr->step,250,0);
                }
                if(a == 10){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//踩到地板掉落
                }
                if(a == 11){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//存檔點
                        al_draw_bitmap(gPtr->flag,50*i-gPtr->step,350,0);
                }
                if(a == 12){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pipeshort,50*i-gPtr->step-10,250,0);//水管飛
                }
                if(a == 13){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->cloud,50*i-gPtr->step,50,0);
                }
                if(a == 14){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->grassthorn,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->cloud,50*i-gPtr->step,150,0);
                }
                if(a == 15){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pipeshort,50*i-gPtr->step-10,250,0);
                        al_draw_bitmap(gPtr->cloudthorn,50*i-gPtr->step,150,0);
                }
                if(a == 16){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pipelong,50*i-gPtr->step-10,200,0);
                        al_draw_bitmap(mPtr->monster,50*i-gPtr->step-10,350,0);//從水管飛怪
                }
                if(a == 17){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//地板陷落
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                }
                if(a == 18){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->question,50*i-gPtr->step,250,0);//踩在問號上面生刺
                }
                if(a == 19){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(mPtr->monster2,50*i-gPtr->step,350,0);
                         al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);//隱形磚頭
                }
                if(a == 20){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(mPtr->monster2,50*i-gPtr->step,350,0);
                }
                if(a == 21){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pill,50*i-gPtr->step,350,0);
                }
                if(a == 22){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->rocket,50*i-gPtr->step,-50,0);
                }
                if(a == 23){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->rocketup,50*i-gPtr->step,500,0);
                }
                if(a == 24){

                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,200,0);//隱形專(低)
                }
                if(a == 25){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->grass,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->cloud,50*i-gPtr->step,200,0);//雲刺
                }
                if(a == 26){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,300,0);//浮空隱形磚
                }
                if(a == 27){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                }
                if(a == 28){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);
                        al_draw_bitmap(gPtr->topthorn,50*i-gPtr->step,200,0);
                }
                if(a == 29){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);
                        al_draw_bitmap(gPtr->grassthorn,50*i-gPtr->step,300,0);//草刺
                }
                if(a == 30){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,300,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,200,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);
                }
                if(a == 31){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->truehere,50*i-gPtr->step,200,0);
                }
                if(a == 32){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->gaygay,50*i-gPtr->step,450,0);
                }
                if(a == 33){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,300,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,200,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);//落下的磚牆
                }
                if(a == 34){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//影型磚(底)
                }

                if(a == 35){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,375,0);
                        al_draw_bitmap(gPtr->trustyourself,50*i-gPtr->step,300,0);
                }
                if(a == 36){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//怪加隱地
                        al_draw_bitmap(mPtr->monster2,50*i-gPtr->step,350,0);
                }
                if(a == 37){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//ㄏ加隱專
                        al_draw_bitmap(gPtr->h,50*i-gPtr->step,350,0);
                }
                if(a == 38){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->truethorn,50*i-gPtr->step,200,0);
                }
                if(a == 39){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->h,50*i-gPtr->step,350,0);
                }
                if(a == 40){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->pillfake,50*i-gPtr->step,300,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);
                        al_draw_bitmap(gPtr->topthorn,50*i-gPtr->step,200,0);
                }
                if(a == 41){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,225,0);//隱地浮空專刺
                }
                if(a == 42){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->question,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->topthorn,50*i-gPtr->step,300,0);//隱地浮空問刺
                }
                if(a == 43){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);//隱地浮空專
                }
                if(a == 44){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,375,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);//高隱伏空專地刺
                }
                if(a == 45){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->pill,50*i-gPtr->step,350,0);//隱地加藥
                }
                if(a == 46){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->flag,50*i-gPtr->step,200,0);//浮空專存檔點
                }
                if(a == 47){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->cloud,50*i-gPtr->step,150,0);//刺雲
                }
                if(a == 48){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);//地板掉落

                }
                if(a == 49){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->nonthink,50*i-gPtr->step,150,0);
                        al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,375,0);
                }
                if(a == 50){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->groundthorn,50*i-gPtr->step,375,0);//純地刺
                }
                if(a == 51){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->flag,50*i-gPtr->step,350,0);//隱專加存黨點

                  }
                if(a == 52){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);
                }
                if(a == 53){
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,450,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,400,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,350,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,300,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,250,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,200,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,150,0);
                        al_draw_bitmap(gPtr->brick,50*i-gPtr->step,100,0);
                }

}
