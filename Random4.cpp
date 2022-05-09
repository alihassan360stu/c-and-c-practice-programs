/*
Auther : Pr!nce Zuhk0
Description :
*/

#include<conio.h>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>;
using std::cout;
using std::endl;
using std::setw;
using std::cin;

int main()
{
    srand( time(0) );
    for(int i =1; i<=10; i++)
    {
        cout<<setw(10) <<1+rand()%6;
        
        if(i%5 == 0)
            cout<<endl;
    }
    getch();
}
