#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a, b;
      int *x, *y;
      cout<<"Please enter two integers... ";
      cin>>a>>b;
      x = &a;
      y = &b;
      cout<<"Memory Address of a is "<<x<<endl;
      cout<<"Memory Address of b is "<<y<<endl;
      cout<<"The Contents of Memory Location x is "<<*x<<endl;
      cout<<"The Contents of Memory Location y is "<<*y<<endl;
      getch();
}
