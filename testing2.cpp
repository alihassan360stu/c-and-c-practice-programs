#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a,b,c;
      a = 2;
      b = 3;
      c = a+ ++b+ ++a;
      cout<<c<<"\n";
      cout<<b<<"\n";
      cout<<a<<"\n";
      int x;
      x =2;
      x = ++x;
      cout<<x<<"\n";
      x = 10;
      x*=++x;
      cout<<x<<"\n";
      x = 10;
      x = x*++x+x;
      cout<<x<<"\n";
      x = 2;
      x = x+ ++x +x;
      cout<<x<<"\n";
      x = 2;
      x = x+ ++x;
      cout<<x<<"\n";
      x=2;
      x= x+ ++x+ ++x;
      cout<<x<<"\n";
      x=2;
      x = x+++x+++x;
      cout<<x<<"\n";
      x=2;
      x= x+ ++x+ ++x;
      cout<<x<<"\n";
      getch(); 
}
