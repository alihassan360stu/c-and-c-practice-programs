#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int max, min, index;
      cout<<"Please enter array length : ";cin>>index;
      int myArray[index];
      for(int i = 0 ; i < index ; i++)
      {
              cout<<"Please enter element for index "<<i<<" : ";
              cin>>myArray[i];
      }
      max = myArray[0];
      min = myArray[0];
      for(int i = 1 ; i < index ; i++)
      {
              if(myArray[i] > max)
              {
                            max = myArray[i];
              }
      }
      for(int i = 1 ; i < index ; i++)
      {
              if(myArray[i] < min)
              {
                            min = myArray[i];
              }
      }
      cout<<"Greatest element in Array is "<<max;
      cout<<"\nSmallest element in Array is "<<min;
      getch();
}
