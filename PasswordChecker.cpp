
#include<iostream>
#include<conio.h>
#define clrscr() system("cls")
using namespace std;
int main()
{
    int n, cno=5;
    char sel, check[4], pass[4] = {'s','a','i','f'};
saif:    cout<<"ENTER YOUR CLASS NO: ";
    cin>>n;
    if (n==cno)
    {
      cout<<"ENTER YOUR PASSWORD: ";
      for(int i=0; i<4; i++)
      {
              check[i] = getche();
              
      }
      for(int i=0; i<4; i++)
      {
              if(check[i]==pass[i])
              {cout<<"\nACCESS GRANTED: ";break;}
              else{cout<<"\nACCESS DENIED: ";break;}
      }
      
    }
    else
    {
     cout<<"INCORRECT CLASS NO: \n";
    }
    cout<<"\n\nDO YOU WANT TO TRY AGAIN [y/n]?";
    cin>>sel;
    if (sel=='y')
    {
                 clrscr();
                 goto saif;
    }
    else if(sel=='n')
    {
         cout<<"THANKS BYE!";
         
    }
    else
    {
        cout<<"WRONG SELECTION:ENTER EITHER Y OR N:";
    }
    getch();
}
