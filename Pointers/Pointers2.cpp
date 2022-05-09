
#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a[5];
      int *p;
      p = a;
      for(int i = 0 ; i < 5 ; i++)
      {
              cout<<"Please enter value for a["<<i<<"] : ";
              cin>>a[i];
      }
      
      for(int i = 0 ; i < 5; i++)
      {
              cout<<"The Contents of Array Index a["<<i<<"] is "<<*p<<endl;
              p++;
      }
      
      getch();
}
