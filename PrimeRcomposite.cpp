/******************************************************************************
  Name: PrimeRcomposite
  Copyright: Reserved with the author
  Author: Saif Ur Rehman
  Date: 30-03-10 00:21
  Description: This program finds if the input number is prime or composite
               if it is prime, the number is multiplied with 2, result is 
               displayed, converse of the number is also shown.
******************************************************************************/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f, flag = 0;
    cout<<"THIS PROGRAM MULTIPLIES 2 WITH A PRIME NUMBER & SHOWS THE REVERSE OF THE RESULT: \n";
    cout<<"\t\tENTER A NUMBER GREATER THAN 10 LESS THAN 50 :";
    cin >>a;
    for (int i=2; i<a; i++)
    {
        if (a%i==0)
        flag = 1;
    }
    if (flag)
    cout<<"COMPOSITE: ";
    else
    { 
    cout <<"PRIME: ";
       b = a * 2;
       cout<<a<<" * 2 = "<<b;
       c = b % 10;
       d = b / 10;
       cout<<"\n\nREVERSE IS : "<<c<<d;
    }
    getch();
}
