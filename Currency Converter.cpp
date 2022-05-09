    #include <iostream>
#include <conio.h>
#define clrscr() system("cls")
using namespace std;
int main ()
{
    float rupees, darham, pound, dollar, ryal;
    char OP, Y_N;
saif:   cout<<"\t\tTHIS IS A CURRENCY EXHCHANGER PROGRAM:";
    cout<<"\n\tWHICH CURRENCY DO YOU WANT TO CONVERT IN PAKISTANI RUPEES?";
    cout<<"\n\nDOLLLAR (d), SAUDI RYAL(r), DUBAI DARHAM(h), POUND(p): ";
    
    cin >>OP;
    if(OP=='d')
    {
             cout<<"\nENTER DOLLARS TO CONVERT IN PAKISTANI RUPEES:";
             cin>>dollar;
             rupees = dollar * 78;
             cout<<dollar<<" DOLLARS ARE  = Rs. "<<rupees<<"/-";  
    }
    else if(OP=='r')
    {
         cout<<"\nENTER RYALS TO CONVERT IN PAKISTANI RUPEES:";
             cin>>ryal;
             rupees = ryal * 23;
             cout<<ryal<<" RYALS ARE  = Rs."<<rupees<<"/-"; 
    }
    else if (OP=='h')
    {
         cout<<"\nENTER DARHMAS TO CONVERT IN PAKISTANI RUPEES:";
             cin>>darham;
             rupees = darham * 22;
             cout<<darham <<" DARHAMS ARE  = Rs."<<rupees<<"/-"; 
    }
    else 
    {
         cout<<"\nENTER POUNDS TO CONVERT IN PAKISTANI RUPEES:";
             cin>>pound;
             rupees = pound * 110;
             cout<<pound<<" POUNDS ARE  = Rs. "<<rupees<<"/-"; 
    }
    cout<<"\n\nDO YOU WANT TO PERFORM OTHER CONVERSIONS?";
    cin>>Y_N;
    if(Y_N=='y')
    {
                clrscr();
                goto saif;
    }
    else if(Y_N=='n')
    {
        cout<<"THANS FOR USING THIS PROGRAM!!";
    }
    else
    {
        cout<<"WRONG SELECTION, YOU EITHER HAVE TO SELECT \"Y\" OR \"N\":";
    }
    getch();
}
