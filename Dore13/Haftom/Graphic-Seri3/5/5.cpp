#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(600,600);
    int a=100, b=100, c=200, d=200;
    int j=1;
    while(true)
    {
        rectangle(100,100,500,500);
        rectangle(200,200,400,400);
        setfillstyle(1,0);
        floodfill(1,1,13);
        if (j==1)
        {
            setfillstyle(1,1);
            a++;
            c++;
        }
        if (j==2)
        {
            setfillstyle(1,2);
            b++;
            d++;
        }
        if (j==3)
        {
            setfillstyle(1,14);
            a--;
            c--;
        }
        if (j==4)
        {
            setfillstyle(1,4);
            b--;
            d--;
        }
        bar(a,b,c,d);
        if (b==100 && c==500)
            j=2;
        if (c==500 && d==500)
            j=3;
        if (d==500 && a==100)
            j=4;
        if (a==100 && b==100)
            j=1;
        Sleep(0);
    }
	getch();
}