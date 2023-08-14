#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(600,600);
    int a=0, b=100, j=1;
    while(true)
    {
        setfillstyle(1,0);
        floodfill(1,1,14);
        if (j==1)
        {
            setfillstyle(1,1);
            a++;
            b++;
        }
        else
        {
            setfillstyle(1,4);
            a--;
            b--;
        }
        bar(a,250,b,350);
        if (b==600 || a==0)
            j*=-1;
        Sleep(10);
    }
	getch();
}
