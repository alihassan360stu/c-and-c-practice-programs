#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int num = 10, *p;
      p = &num;
      *(++p) = 20;
      cout<<*p;
      getch();
}
