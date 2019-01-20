#include <stdlib.h>

#include "functionlist.h"
int pass(g* gPtr,int i){
    int x;
    x = i - 1;
    if(gPtr->barD_x > 50*x)
    return 1;
    else return 0;
}
