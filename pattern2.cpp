#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
     for(int i = 0; i<20; i++)
     {
             for(int j=0; j<i; j++)
             {
                     cout<<"*";
             }
             cout<<endl;
             }
             for(int i = 20; i>0; i--)
             {
                     for(int j=0; j<i; j++)
             {
                     cout<<"*";
             }

             cout<<endl;
     }
     getche();
 }
