#include<iostream>
#include<conio.h>
#include<iomanip>
#define clrscr() system("cls");
using namespace std;
int main()
{
    int a, b, num;
    char ch, sel, rawala = 31;
    do
    {
         clrscr();
    cout<<"BASE OF THE TRIANGLE: ";
    cin>>num;
    cout<<"CHARACTER TO PRINT: ";
    cin>>ch;
    for(int s = num/2, a = 0; a<num; a+=2, s--)
      {
            cout<<setw(s);
            for(b = 0; b<=a; b++)
            {
                  cout<<ch;
            }
            cout<<endl;
            
       }
    cout << "\nCONTINUE [Y/N]? ";
    cin >> sel;
    }while(sel=='y'||sel=='Y');
    cout<<"Thanks Bye!";
    getch();
}
