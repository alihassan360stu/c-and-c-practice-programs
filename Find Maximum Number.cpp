#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, b, max;
    cout<<"\t\tTHIS PROGRAM FINDS GREATER NUMBER: \n";
    cout<<"\tA =  ";
    cin>>a;
    cout<<"\tB =  ";
    cin>>b;
    max = a>b?a:b;
    cout<<"MAXIMUM NUMBER IS = "<<max;
    getch();
}
