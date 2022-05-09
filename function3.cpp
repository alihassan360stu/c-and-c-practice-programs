#include <iostream>
#include <conio.h>

using namespace std;

int prod(int,int,int);

main()
{
      int result;
      result = prod(2,3,8);
      cout<<result;
      getch();
}

int prod(int x, int y, int z)
{
    return x*y*z;
}
