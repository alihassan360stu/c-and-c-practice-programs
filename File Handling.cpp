#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fptr;
    int rno;
    char name[10];
    char add[20];
    fptr.open("STUDENT.txt",ios::in);
    int c = 0;
    while(c!=1)
    {
               cout<<"Enter R.no, name, address: \n";
               cin>>rno>>name>>add;
               fptr<<rno<<endl;
               fptr<<name<<endl;
               fptr<<add<<endl;
               c++;
    }
    fptr.close();
    getch();
}
