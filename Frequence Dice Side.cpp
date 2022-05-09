#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int frequency1=0, frequency2=0,
    frequency3=0, frequency4=0,
    frequency5=0, frequency6=0,
    face;
    for(int roll=1; roll<=100; roll++)
    {
            face = 1 + rand()%6;
            switch(face)
            {
              case 1:
                   frequency1++;break;
              case 2:
                   frequency2++;break;
              case 3:
                   frequency3++;break;
              case 4:
                   frequency4++;break;
              case 5:
                   frequency5++;break;
              case 6:
                   frequency6++;break;
            }
    }
    cout<<"Face"<<"\tFrequency\n";
    cout<<"\n 1\t"<<frequency1;
    cout<<"\n 2\t"<<frequency2;
    cout<<"\n 3\t"<<frequency3;
    cout<<"\n 4\t"<<frequency4;
    cout<<"\n 5\t"<<frequency5;
    cout<<"\n 6\t"<<frequency6<<endl;
    getch();
}
