#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    for(int i=0; i<10; i++)
    {
            for(int s = 2, j=0; j<10; j++)
            { cout<<setw(s);
                    
                    if((i==1 && j==6|| i==1 && j==7||i==1 && j==8||i==1 && j==9)||(i==2 && j==6) ||( i==3 && j==6|| i==3 && j==7|| i==3 && j==8|| i==3 && j==9) || (i==4&&j==9 )||( i==5 && j==6|| i==5 && j==7|| i==5 && j==8|| i==5 && j==9))
                    {cout<<"+";}
                    else
                    {
                    cout<<"\0";
                    }
                    
            }
            cout<<endl;
    }
    getch();
}
