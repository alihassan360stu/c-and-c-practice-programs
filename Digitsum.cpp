#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num, r, div, sum = 0;
    cout << "ENTER A NUMBER: ";
    cin>>num;
    while(num)
    {
           r = num%10;
           sum = sum + r;
           num = num/10;
    }
    cout<<"SUM IS  = " << sum;
    getch();
}
