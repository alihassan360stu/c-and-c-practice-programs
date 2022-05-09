/*
Auther : Pr!nce Zuhk0
Description :
*/

#include<conio.h>
#include<iostream>
#include<iomanip>
#include<cstdlib>

using std::setw;
using namespace std;

int main()
{
    for(int i =1; i<=20; i++)
    {
            cout<<setw(10)<<(1 + rand()%6);
            
            if(i%5==0)
                cout<<endl;
    }
    getch();
    return 0;
}
