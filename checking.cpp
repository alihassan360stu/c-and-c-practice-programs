#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int *p, num;
      num = 0;
      p = &num;
      
      *p = 100;
      cout<<p;
      getch();
}
