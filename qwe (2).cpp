#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a,b;
      cout<<"Please enter width  : ";cin>>a;
      cout<<"Please enter length : ";cin>>b;
      cout<<endl;
      for(int i = 0 ; i < a; i++)
      {
           for(int j = 0; j < b; j++)
           {
                   if(i == 0 || j == 0 || i==a-1 || j == b-1)
                   {
                        cout<<"* ";
                   }
                   else
                   {
                       cout<<"  ";
                   }
           }
           cout<<endl;
      }
      getch();      
}
