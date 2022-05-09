#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    // Trigonometric Functions, sin(double),cos(double),tan(double)
    float x=60;
    x = x *(3.14/180);
    cout<<"sin(x) = "<<sin(x)<<endl;
    cout<<"cos(x) = "<<cos(x)<<endl;
    cout<<"tan(x) = "<<tan(x)<<endl;
    double y = -3.4;
    // Mathematical Functions, fabs(double), labs(double), fabsl(double), ceil and floor(y);
    cout<<fabs(y)<<endl;
    cout<<labs(y)<<endl;
    cout<<fabsl(y)<<endl;
    cout<<ceil(y)<<endl;
    cout<<floor(y)<<endl;
    double a=15, b=7;
    // fmod(double, double) displays the modulus of two numbers...
    cout<<"Remainder = "<<fmod(a,b)<<endl;
    double d, c = 10.123;
    // modf(double, &double) function
    cout<<"The Fraction Part is = "<<modf(c, &d)<<endl;
    cout<<"The Fraction Part is = "<<d<<endl;
    // Power Functions(int, int)
    cout<<"3 To The Power 4 is = "<<pow(3,4)<<endl;

    // Random Numbers, (rand()% int limit);
    for(int c = 0; c<5; c++)
    {
            cout<<(1+ rand()%100)<<"\t";
    }
    // The srand Function srand(int);
    int n;
    cout<<"\nEnter seed :"; cin>>n;cout<<endl;
    srand(n);
    for(int i=1; i<=5; i++)
    {
            cout<<(1+rand()%100)<<"\t";
    }
    getch();
}
