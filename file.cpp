#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
    ofstream outclientfile("clients.dat",ios::out);
    if(!outclientfile)
    {
    cerr<<"file could not be opened"<<endl;
    exit(1);
}
int account;
char name[30];
double balance;
while(cin>>account>>name>>balance)
{
                                  outclientfile<<account<<" "<<name<<" "<<balance<<" \n";
                                  cout<<"?";
                                  }
                                  getch();
                                  }
                                  

















































































































































































































