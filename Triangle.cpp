#include <iostream>
#include <conio.h>
#include <iomanip.h>

using namespace std;

main()
{
      int height;
      cout<<"Enter the height in integer : ";cin>>height;cout<<endl;
      int position = 30;
      for(int i = 0; i<height; i++, position--)
      {
              cout<<setw(position);
              for(int j=0; j<2*i+1; j++)
              {
                      if(j==0 || j==2*i || i == height-1)
                      {
                          cout<<"*";
                      }
                      else
                      {
                          cout<<" ";
                      }
              }
              cout<<endl;
      }
      getch();
}
