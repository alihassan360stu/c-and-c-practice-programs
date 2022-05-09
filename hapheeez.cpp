#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
     int i,j;
     for(i=0;i<=7,i++)
     {
                      for(j=0;j<=7,j++)
                      {
                                       switch
                                       {
                                             case 'i==0&&j==2||j==6':
                                                  cout<<"*"<<endl;
                                             case 'i==1&&j==4':
                                                  cout<<"*";
                                             case'i==2&&j==0||j=6':
                                                  cout<<"*";
                                             case'i==3&&j==0||j=1||j==3||j==5||j==6':
                                                  cout<<"ZA   RI";
                                             case'i==5&&j==2||j=5':
                                                  cout<<"*";
                                             case'i==6&&j==3||j=4':
                                                  cout<<"*";
                                             case'i==7&&j==4':
                                                  cout<<"*";                                                   
                                       }
                      }
     }
      getch();
}
