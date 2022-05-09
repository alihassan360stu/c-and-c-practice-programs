#include <iostream>
#include<conio.h>
#define clrscr() system("cls");
using namespace std;
int main()
{
    int words = 0;
    char a, sel;
saif:    cout<<"\t\tTHIS IS A WORD COUNTER PROGRAM: \n\n";
    do
    {
       a =  getche();
       if (a == ' ')
       words ++;
       
    }
    while(a!='\r');
    cout<<"\n\nWORDS IN YOUR TEXT ARE: "<<words+1<<"\n\n\n";
wrong:    cout<<"DO YOU WANT TO TRY AGAIN:\n YES(y) Or NO(n):";
    cin>>sel;
    if (sel=='y'||sel=='Y')
    {
           clrscr();
           goto saif;
    }
    else if(sel=='n'||sel=='N')
    {
         cout<<"THANKS FOR USING THIS PROGRAM.GOODBYE!";
    }
    else
    {
    cout<<"WRONG SELECTION, YOU EITHER HAVE TO SELECT \"Y\" OR \"N\":\n";
    goto wrong;
    }
    getch();
}
