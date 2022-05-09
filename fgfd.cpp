#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num, pow, res = 1;
    cout<<"ENTER A NUMBER: ";
    cin>>num;
    cout<<"ENTER THE POWER: ";
    cin>>pow;
 
    for(int i=0; i<pow; i++)
    res = res * num;
     cout<<num <<" ^ "<<pow<<" = "<<res;
    
    
    getch();
}

