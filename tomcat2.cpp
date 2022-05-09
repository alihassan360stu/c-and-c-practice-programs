#include<conio.h>
#include<iostream>

using namespace std;

main()
{
      int i,j,k,count=0;
      bool flag = 0;
      i=1;
      j=1;
      while(i<50)
      {
           while(j)
           {
                k=0;
                while(k<j)
                {
                     count++;
                     if(k*k==j)
                     {
                         flag==1;
                         cout<<"j is a perfect sqaure no";
                         goto tomcat;
                     }
                     k++;
                }
                j++;
           }
           tomcat:
      }





getch();
}
