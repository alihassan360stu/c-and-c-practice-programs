#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a = 1, b = 3, c;
    cout<<a<<"\t"<<b;
    c = a + b;
    while(c<=50)
    {
    a = b;
    b = c;
    cout<<"\t"<<c;
    c = a + b;
    }
    getch();
}
