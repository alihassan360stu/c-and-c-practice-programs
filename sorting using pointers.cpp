#include<conio.h>
#include<iostream>

using namespace std;
void sortArray(int *);
main()
{
      int arr[5]= {5,3,8,7,1};
      sortArray(arr);
      for(int i=0; i<5; i++)
         cout<<arr[i]<<endl;
getch();
}

void sortArray(int *arr)
{
     int min, max;
     for(int i = 0; i<4; i++)
     {
             for(int j=0; j<4; j++)
             {
                  min = arr[j];
                  max = arr[j+1];
                  if(arr[j+1] < arr[j])
                  {
                      min = arr[j+1];   
                      max = arr[j];
                  }
                  arr[j]= min;
                  arr[j+1] = max;
             }
     }
}
