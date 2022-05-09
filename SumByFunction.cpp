#include<iostream>
#include<conio.h>
using namespace std;
void sum(int);
int main()
{
    int a, sum1;
    cout<<"HOW MANY NUMBERS: ";
    cin>>a;
    sum(a);
    
    getch();
}
void sum(int b)
{
     int n, sum = 0;
     for(int i=1; i<=b; i++)
     {
       cout<<i<<"-Enter a number: ";
       cin>>n;
       sum+=n;
      
     }
    cout<<"SUM IS "<<sum;
}
