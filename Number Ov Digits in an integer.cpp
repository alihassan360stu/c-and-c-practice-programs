#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num, count = 0;
    cout<<"Enter a Number: ";
    cin>>num;
    while(num)
    {
              count++;
              num = num/10;
    }
    cout<<"The Number has "<<count<<" digits ";
    getch();
}
