/*
Auther : Pr!nce Zuhk0
Description :
*/

#include<conio.h>
#include<iostream>
#include<iomanip>
#include<cstdlib>

using std::cout;
using std::endl;
using std::setw;
using std::cin;

int main()
{
    unsigned seed;
    cout<<"Enter seed : ";
    cin>>seed;
    srand( seed );
    for(int i =1; i<=10; i++)
    {
        cout<<setw(10) <<1+rand()%6;
        
        if(i%5 == 0)
            cout<<endl;
    }
    getch();
}
