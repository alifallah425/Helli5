#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(800,600);
    rectangle(100,250,700,350);
    int a=100 ,c=1;
    while(a<700)
    {
        setfillstyle(1,c);
        bar(101,251,a,350);
        Sleep(100);
        a+=2;
        c++;
        if (c==15)
            c=1;
        Sleep(10);
    }
	getch();
}
