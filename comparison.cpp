#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a,b,c;
      cout<<"Enter 1st value ? ";
      cin>>a;
      cout<<"Enter 2nd value ? ";
      cin>>b;
      cout<<"Enter 3rd value ? ";
      cin>>c;
      if(a==b)
              {
                  if(a==c)
                           cout<<"All value are equal"; 
                   else
                           cout<<"These value are different"; 
              }
      else
              cout<<"These value are different";
      getch();
}
