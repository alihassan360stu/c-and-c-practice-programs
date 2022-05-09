#include<conio.h>
#include<iostream>

using namespace std;
void order(int *);

main()
{
      int arr[5];
      for(int i=0; i<5; i++)
      {
              cout<<"Enter the values";
              cin>>arr[i];
      }
      order(arr);
      for(int i=0; i<5; i++)
      {
           cout<<arr[i]<<"\t";
      }
      getch();
      getch();
}

void order(int *arr)
{
    int a;                     
    for(int i=4; i>0; i++)
    {
       for(int j=0; j<i; j++)
       {
        if(arr[j]>arr[j+1])
        {
             a=arr[j];
             arr[j]=arr[j+1];
             arr[j+1] = a;
        }
       }
    }
}
