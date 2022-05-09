#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    char name[25], rollno[13], department[50];
    char subject[5][15];
    int marks[2][5];
    int tm=0, om=0;
    cout<<"Enter your department name?";
    cin>>department;
    cout<<"Enter your name?";
    cin>>name;
    cout<<"Enter your rollno?";
    cin>>rollno;
    for(int i=0; i<5; i++)
    {
        cout<<"Enter name for Subject"<<i+1<<"?";
        cin>>subject[i];
        cout<<"Enter total marks for Subject"<<i+1<<"?";
        cin>>marks[0][i];
        cout<<"Enter obtain marks for Subject"<<i+1<<"?";
        cin>>marks[1][i];
    }
    
    cout<<"=======================================================================\n";
    cout<<setw(60)<<"Cecos Institute of Engineering and Technology"<<endl;
    cout<<setw(57)<<"Department : Computer System Engineering";
    cout<<endl<<endl;
    cout<<endl<<"Transcript";
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"RollNo : "<<rollno<<endl<<endl;
    cout<<"Subject\t\tTotal marks\tObtain marks\n";
    for(int i=0; i<5; i++)
    {
        cout<<subject[1]<<"\t\t"<<marks[0][i]<<"\t"<<marks[1][i]<<endl;
        tm+=marks[0][i];
        om+=marks[1][i];
    }
    cout<<endl<<endl<<"Total marks : "<<om<<" out of "<<tm;
    cout<<endl<<"Percentage : "<<(om/tm)*100;
    getch();
}
