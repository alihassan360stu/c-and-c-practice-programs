#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a, b;
    cout<<"THIS PROGRAM FINDS SQUARE AND SQUARE ROOTS OF ALL THE NUMBERS FROM 1 UPTO THE\n";
    cout<<"NUMBER ENTERED: \n";
    cout<<"\nENTER A NUMBER: ";
    cin>>a;
    for(int i=1; i<=a; i++)
    {
            cout<<i<<"\t"<<i*i<<endl;
           
    }
    cout<<"\n\n+=+=+=+=+=+=+=+=+=+\n";
    cout<<"SQUARE ROOTS OF THE NUMBERS:\n";
    for(int i=1; i<=a; i++)
    {
          
            cout<<i<<" = "<<sqrt(i)<<"\t";
            
    }
    getch();
}
