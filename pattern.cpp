#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      for(int i = 0; i < 10 ; i++ )
      {
              for(int j = 0; j < 8 ; j++)
              {
                      if(i==0 || j==7)
                      {
                              cout<<" *";
                      }
                      else
                      {
                              cout<<"  ";
                      }
              }
              cout<<"\n";
      }
      getch();
}
