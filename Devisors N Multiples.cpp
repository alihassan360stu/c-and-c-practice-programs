#include<iostream>
#include<conio.h>
#define clrscr() system("cls");
using namespace std;
int main()
{
    int a, b;
    char sel;
saif:    cout<<"ENTER A NUMBER TO FIND IT'S DEVISORS:\n\t A = ";
    cin>>a;
    cout<<"DEVISORS OF "<<a<<" ARE: \n";
    for(int i=a; i>=1; i--)
    {
             if(!(a%i))
             {
             cout<<"\t\t"<<a/i<<endl;
             }
    }
   
    cout<<"ENTER A NUMBER TO FIND IT'S MULTIPLES UPTO 100:\n\t A = ";
    cin>>b;
    cout<<"MULTIPLES OF "<<b<<" UPTO 100 ARE: \n";
    for(int i=1;i<=100/b; i++)
    {
            cout<<b*i<<"\t";
    }         
    wrong:    cout<<"\n\n\t\tDO YOU WANT TO TRY OTHER NUMBERS [Y/N]?";
    cin>>sel;
    if (sel=='y'||sel=='Y')
    {
                 clrscr();
                 goto saif;
    }
    else if(sel=='n'||sel=='N')
    {
         cout<<"\n\t\tTHANKS BYE ! ";
    }
    else
    {
        cout<<"\nWRONG SELECTION: YOU EITHER HAVE TO SELECT \"Y\" OR \"N\"";
        goto wrong;
    }
    getch();
}
