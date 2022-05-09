#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a, b, i=1, j, s;
    char ch;
    cout<<"BASE OF THE TRIANGLE: ";
    cin>>a;
    cout<<"CHARACTER TO PRINT: ";
    cin>>ch;
   do
    {
       s = a/2+4;
       cout<<setw(s);
       j = 1;
       while(j<=i)
       {
                  cout<<ch;
                  j++;
       }
       cout<<endl;
       i+=2;
       s--;
    } while(i<=a);
    getch();
    
}
