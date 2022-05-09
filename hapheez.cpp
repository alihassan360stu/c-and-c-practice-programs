#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      for(int i = 0 ; i<=5; i++)
      {
           cout<<"*";
           for(int j=0; j<4; j++)
           {
                   if(i==5)
                   {
                           cout<<" *";
                   }
           }
           cout<<endl;
      }
      getch();
}
