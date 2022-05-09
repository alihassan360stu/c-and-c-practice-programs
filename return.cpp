#include<iostream>
#include<conio.h>
int minimum(int, int);
using namespace std;
int main()
{
    int arr[5], small =0, num, R;
    cout<<"Enter the Numbers: ";
    for(int i=0; i<5; i++)
    {
            cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
            if(small>arr[i])
            small = arr[i+1];
    }
    
    cout<<"Enter a number: ";
    cin>>num;
    R = minimum(small,num);
    cout<<"Minimum Numbers is: "<<R;
    
    getch();
}
int minimum(int a, int b)
{
    if (a<b)return a;
    else return b;
}
