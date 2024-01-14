#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main(){
    int gd,DETECT,gm;
    initgraph(&gd,&gm);
    for(int i = 0; i < =100; i++)
    {
        setcolor(i);
        circle(319,219-1,20+i);
        circle(319,219+1,20+i);
        circle(299-1,239,20+i);
        circlr(339+i,239,20+i);
        delay(100);

    }
    return 0;
    
}
