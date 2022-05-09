#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int arr[5], *p, max;
      p = arr;
      for(int i = 0 ; i < 5 ; i++)
      {
              cout<<"Please enter value for arr["<<i<<"] : ";
              cin>>*p;
              p++;
      }
      p = arr;
      max = *p;
      for(int i = 0; i < 5 ; i++)
      {
              if(*p>max)
              {
                        max = *p;
              }
              p++;
      }
      cout<<"Maximum out of the Array is "<< max;
      getch();
}
