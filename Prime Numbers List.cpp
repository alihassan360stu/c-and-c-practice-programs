#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int flag,a;
    cout<<"\t\t\tPRIME NUMBERS LIST : \n\n\n";
    cout<<"OF HOW MANY NUMBERS: ";
    cin>>a;
    for(int i=1; i<a; i++)
    {
            flag  = 0;
            for(int j=2; j<i; j++)
            {
                    if(i%j==0)
                    flag++;
                    
            }
            if(!flag)
            cout<<i<<"\t";
    }
    getch();
}
