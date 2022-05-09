#include<conio.h>
#include<iostream>
#include<graphics.h>

using namespace std;

main()
{
      int d,m,r,co;
      d=DETECT;
      initgraph(&d,&m," ");
      cleardevice();
      for(co = 1; co<=15; c0++)
      {
             setcolor(co);
             circle(300,200,c0*10);
      }
      getch();
      closegraph();
}
