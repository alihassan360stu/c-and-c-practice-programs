#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      for(int i=0; i<=5; i++)
      {
              for(int j=0; j<=4; j++)
              {
                      if(j==4 || i==0)
                          cout<<" *";
                      else
                          cout<<"  ";
              }
              cout<<endl;
      }
      getch();
}
