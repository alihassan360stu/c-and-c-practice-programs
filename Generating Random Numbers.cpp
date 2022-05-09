#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    for(int i=1; i<=10; i++)
    {
            cout<<"\t"<<(rand()%6);
            if(i%5==0)
            cout<<endl;
    } 
    getch();
}
