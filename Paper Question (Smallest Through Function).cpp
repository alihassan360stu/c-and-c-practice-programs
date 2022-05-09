#include<iostream>
#include<conio.h>
int minimum(int, int);
using namespace std;
int main()
{
    int Arr[5], R, Num, Small;
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<5; i++)
    {
            cin>>Arr[i];
    }
    Small = Arr[0];
    for(int i=1; i<5; i++)
    {
            if(Arr[i]<Small) Small = Arr[i];
    }
    cout<<"Smallest Number is: "<<Small;
    cout<<"\nEnter a Number: "; cin>>Num;
    R = minimum(Small,Num);
    cout<<"Minimum of the Two Numbers  is = "<<R;
    
    getch();
}
int minimum(int a, int b)
{
    if(a<b)return a;
    else return b;
}
