#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[4], temp;
    cout<<"Please Enter array Elements in random order to sort them in ascending order:\n";
    for(int i=0; i<4; i++)
    {
     arr[i]=getche()-48;
     cout<<"\t";
    }
  
    for(int j=0; j<5; j++)
    {
    for(int i=0; i<4; i++)
    {
            if(arr[i]>arr[i+1])
            {
             temp = arr[i];
             arr[i]=arr[i+1];
             arr[i+1] = temp;
            }
    }
}
     cout<<"\n\n\nSORTED ARRAY IS: \n\n";
    for(int i=0; i<4; i++)
    {
            cout<<arr[i]<<"\t";
    }
    getch();
}
