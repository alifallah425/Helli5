#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    initwindow(800,600);
    setfillstyle(1,2);
    floodfill(0,0,2);
    setfillstyle(1,15);
    circle(100,300,70);
    circle(700,300,70);
    setfillstyle(1,2);
    bar(0,0,150,600);
    bar(650,0,800,600);
    setfillstyle(1,15);
    circle(100,300,4);
    floodfill(100,300,15);
    circle(700,300,4);
    floodfill(700,300,15);
    rectangle(30,160,150,440);
    rectangle(770,160,650,440);
    rectangle(30,230,70,370);
    rectangle(770,230,730,370);
    rectangle(15,275,30,325);
    rectangle(785,275,770,325);
    rectangle(30,30,770,570);
    circle(400,300,4);
    floodfill(400,300,15);
    line(400,30,400,570);
    circle(400,300,70);
    circle(30,30,10);
    circle(30,570,10);
    circle(770,30,10);
    circle(770,570,10);
    setfillstyle(1,2);
    bar(0,0,40,30);
    bar(0,0,30,40);
    bar(760,0,800,30);
    bar(771,0,800,40);
    bar(0,600,40,571);
    bar(0,600,30,560);
    bar(760,571,800,600);
    bar(771,560,800,600);
	getch();
}
