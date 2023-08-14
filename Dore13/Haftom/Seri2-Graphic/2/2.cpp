#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    initwindow(800,600);
    setcolor(2);
    rectangle(100,100,700,500);
    circle(400,300,200);
    setfillstyle(4,4);
    floodfill(101,101,2);
    setfillstyle(5,4);
    floodfill(699,499,2);
    setfillstyle(2,1);
    floodfill(400,300,2);
    setfillstyle(1,14);
    bar(300,200,500,400);
	getch();
}