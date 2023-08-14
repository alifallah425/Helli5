#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    initwindow(800,600);
    int x,y,r;
    cin>>x>>y>>r;
    circle(x,y,r);
	getch();
}