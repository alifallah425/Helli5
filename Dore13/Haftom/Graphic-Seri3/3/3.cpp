#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(700,700);
    line(100,600,600,600);
    line(100,600,100,100);
    int a=100, c=1;
    while(a<600)
    {
        setcolor(c);
        line(100,a,a,600);
        a++;
        c++;
        if (c==15)
            c=1;
        Sleep(10);
    }
	getch();
}
