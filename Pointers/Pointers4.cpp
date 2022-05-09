#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a;
      cout<<"Enter any integer : ";
      cin>>a;
      int *x;
      x = &a;
      *x = 100**x;
      cout<<"Value of a is "<<a;
      getch();
}
