#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[3][3];
    cout<<"ENTER THE ELEMENTS OF FIRST MATRIX: \n";
    for(int i=0;i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout<<"row = "<<i<<" col = "<<j<<" ";
                    cin>>a[i][j];
                    
            }
            cout<<endl;
    }
    cout<<"------------------\n";
    cout<<"MATRIX IN ARRANGED FORM IS : \n";
    for(int i=0;i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    
                    cout<<a[i][j]<<"\t";
                    
            }
            cout<<endl;
    }
    cout<<"------------------";
            getch();
}
