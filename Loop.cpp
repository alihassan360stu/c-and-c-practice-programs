#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a = 10;
      for(int i = 1; i < a; i++)
      {
              for(int j = 1; j<=i; j++)
              {
                      cout<<i;
              }
              cout<<endl;
      }
      getch();
}
