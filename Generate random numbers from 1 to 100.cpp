#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int r, num;
   // cout<<"Enter Seed:"; cin>>r;
    //srand(r);
    cout<<endl;
    for(int i=0; i<10; i++)
    {
     cout<<rand()%100<<"\t";
     if(i%5==0)cout<<endl;
    }

    getch();
}
