#include <iostream>
#include <graphics.h>
#include <windows.h>
using namespace std;
main()
{
    initwindow(700,700);
    line(100,350,600,350);
    line(350,600,350,100);
    int a=100, b=350, c=1;
    int ja=1, jb=1;
    while(a<=600)
    {
        setcolor(c);
        line(350,a,b,350);
        Sleep(10);
        c++;
        if (c==15)
            c=1;

        if (ja==1)
            a++;
        else
            a--;
        if (jb==1)
            b++;
        else
            b--;
        if (a==100 || a==600)
            ja*=-1;
        if (b==100 || b==600)
            jb*=-1;
        Sleep(10);
    }
	getch();
}
