#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(800,600);
    circle(400,300,50);
    int jahat=-1;
    int a=430, b=370;
    int x1=50,x2=250,x3=450,x4=650,x5=850;
    int y1=200,y2=400,y3=600,y4=800,y5=1000;
    while(true)
    {
        circle(420,270,40); //sar
        line(430,258,445,268); //cheshm
        line(400,304,400,400); //badan
        line(400,400,a,500); //pa
        line(400,400,b,500); //pa
        line(400,320,a,390); //dast
        line(400,320,b,390); //dast

        setfillstyle(1,15);
        bar(0,465,800,468);
        bar(0,550,800,553);
        bar(x1,500,y1,510);
        bar(x2,500,y2,510);
        bar(x3,500,y3,510);
        bar(x4,500,y4,510);
        bar(x5,500,y5,510);

        if (jahat==1)
        {
            a++;
            b--;
        }
        if (jahat==-1)
        {
            a--;
            b++;
        }
        if (a==370 || a==430)
            jahat*=-1;

        x1--; x2--; x3--; x4--; x5--;
        y1--; y2--; y3--; y4--; y5--;

        if (x1==-150)
        {
            x1+=200; x2+=200; x3+=200; x4+=200; x5+=200;
            y1+=200; y2+=200; y3+=200; y4+=200; y5+=200;
        }

        setfillstyle(1,0);
        floodfill(1,1,1);
        Sleep(0);
    }
	getch();
}
