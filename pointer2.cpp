#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      double x;
      int *p,y;
      double *a;
      x=220.333;
      p=(int*)&x;
      y = *01p;
      cout<<y;
      cout<<endl<<p;
      cout<<endl<<&x;
      getch();
      
}
