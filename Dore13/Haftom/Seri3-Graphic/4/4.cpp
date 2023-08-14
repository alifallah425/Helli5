#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(800,600);
    circle(400,300,50);
    int jahat=-1;
    int h=370;
    while(true)
    {
        setfillstyle(1,15);
        bar(50,550,750,560); //zamin
        circle(400,300,40); //sar
        line(380,290,395,290); //cheshm
        line(405,290,420,290); //cheshm
        line(400,340,400,450); //badan
        line(400,450,450,550); //pa
        line(400,450,350,550); //pa
        line(400,400,500,h); //dast
        line(400,400,300,h); //dast
        line(225,h,575,h);  //milevazne
        circle(200,h,25);   //vazne
        circle(600,h,25);   //vazne
        setfillstyle(9,15);
        floodfill(200,h,15);
        floodfill(600,h,15);
        if (jahat==1)
        {
            h+=3;
            line(380,310,400,320);
            line(420,310,400,320);
        }
        if (jahat==-1)
        {
            h--;
            line(380,320,400,310);
            line(420,320,400,310);
        }
        if (h==228 || h==372)
            jahat*=-1;
        setfillstyle(1,0);
        floodfill(1,1,1);
        Sleep(0);
    }
	getch();
}