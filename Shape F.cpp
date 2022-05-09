#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    cout<<endl;
    for(int i=0; i<=11; i++)
    {
            for(int s = 2, j=0; j<=11; j++)
            {
                    cout<<setw(s);
                    
                    if((i==0&&j==9||i==0&&j==10||i==0&&j==11)||(i==1&&j==9||i==2&&j==9||i==3&&j==9||i==4&&j==9||i==2&&j==10)||(i==2&&j==11))
                    cout<<"+";
                    else
                    cout<<"\0";
            }
            cout<<endl;
    }
    getch();
}
