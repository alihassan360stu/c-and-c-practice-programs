#include<iostream>
#include<conio.h>
#define clrscr() system("cls");
using namespace std;
int main()
{
    int MyClassNo = 5, Num, saif = 0;
    char sel, MyPassWord[4] = {'s','a','i','f'}, Check[4];
    do
    { clrscr();
    cout << "Enter Your Class Number: ";
    cin>>Num;
    if (Num == MyClassNo)
    {
            cout<<"Enter your Password: ";
            for(int i=0; i<4; i++)
            {
                    Check[i] = getch();
                    cout<<"*";
            }
            for(int i=0; i<4; i++)
            {
                    if(Check[i]==MyPassWord[i])
                    {cout<<"\nAccess Granted: ";break;}
            else{cout<<"\nAccess Denied ";break;}        
            }
            
    }
    else {cout << "Incorrect Class Number: "; }
    cout << "\nContinue [Y/N]? ";
    cin>>sel;
    }
    while(sel=='y'||sel=='Y');
    cout<<"THANKS BYE ! ";
    getch();
}
