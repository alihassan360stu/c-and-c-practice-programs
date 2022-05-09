#include<conio.h>
#include<iostream>
#include<graphics.h>

using namespace std;

main()
{
      int d,m;
      d=DETECT;
      initgraph(&d,&m, " ");
      cleardevice();
      bar3d(100,50,120,300,10,1);
      getch();
      closegraph();      
getch();
}
