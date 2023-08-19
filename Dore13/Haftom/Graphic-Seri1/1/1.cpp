#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    initwindow(800,600);
    line(50,500,750,500);
    circle(325,475,25);
    circle(475,475,25);
    rectangle(250,400,550,475);
    line(325,450,325,500);
    line(475,450,475,500);
    rectangle(280,355,520,400);
    bar(290,365,395,390);
    bar(405,365,510,390);
	getch();
}
