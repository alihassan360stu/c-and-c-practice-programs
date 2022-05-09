#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, factorial = 1;
    cout<<"ENER A NUMBER: ";
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        factorial = factorial * i;
        cout<<endl<<i<<"! is = " <<factorial;
    }
    
    getche();
}
