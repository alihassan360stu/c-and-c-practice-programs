#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a;
      char b = getch();
      a = b;
      cout<<b<<" = "<<a;
      getch();
      for(int i=0; i<256; i++){
              cout<<(char)i<<" = "<<i;        
      }
      getch();
}
