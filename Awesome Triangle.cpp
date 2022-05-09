#include<iostream>
#include<conio.h>
#include<iomanip>
#define clrscr() system("cls");
using namespace std;
int main()
{
    int a;
    char ch, sel;
    do
    {
         clrscr();
    cout<<"BASE OF THE TRIANGLE: ";
    cin>>a;
    cout<<"\nCHARACTER TO PRINT: ";
    cin>>ch;
    cout<<"\n\n";
    for(int s = a/2, i=1; i<=a; i+=2, s--)
    {
            cout<<setw(s);
            for(int j=1; j<=i; j++)
            {
            cout<<ch;
            }
            cout<<endl;
    }
    cout<<"\n\nDO YOU WANT TO CONTINUE [Y/N]?";
    cin>>sel;
    }while(sel=='y'||sel=='Y');
    cout<<"THANKS BYE!";
    getch();
}
