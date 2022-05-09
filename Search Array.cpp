#include<iostream>
#include<conio.h>
#define clrscr() system ("cls")
using namespace std;
int main()
{
    int a, arr[5], flag =0 ;
    char sel;
saif:    cout<<"\t..::ENTER A NUMBER TO SEE IF IT'S PRESENT IN THE ARRAY : \n";
    cout<<"ENTER ELEMENTS OF THE ARRAY: \n";
    for(int i=0; i<5; i++)
    {
             cout<<"row = "<<i<<" ";
             cin>>arr[i];    
    }
    cout<<"ENTER THE NUMBER:";
    cin>>a;
    for(int i=0; i<5; i++)
    {   
       if(a==arr[i])
         flag = 1;
         
    }
    if (flag)
       {
          cout<<a<<" PRESENT: ";
       }
    else
        {
          cout<<a<<" !PRESENT: ";
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
