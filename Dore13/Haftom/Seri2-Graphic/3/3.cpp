#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int x12,x13,x23,y12,y13,y23;
    if(x1<x2)
        x12=x1+(x2-x1)/2;
    else
        x12=x2+(x1-x2)/2;

    if(x1<x3)
        x13=x1+(x3-x1)/2;
    else
        x13=x3+(x1-x3)/2;

    if(x2<x3)
        x23=x2+(x3-x2)/2;
    else
        x23=x3+(x2-x3)/2;

    if(y1<y2)
        y12=y1+(y2-y1)/2;
    else
        y12=y2+(y1-y2)/2;

    if(y1<y3)
        y13=y1+(y3-y1)/2;
    else
        y13=y3+(y1-y3)/2;
    
    if(y2<y3)
        y23=y2+(y3-y2)/2;
    else
        y23=y3+(y2-y3)/2;

    initwindow(800,600);
    setfillstyle(1,2);
    floodfill(0,0,1);
    setcolor(1);
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    line(x1,y1,x23,y23);
    line(x2,y2,x13,y13);
    line(x3,y3,x12,y12);
	getch();
}