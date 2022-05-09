#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int n, r;
    cout<<"Enter any integer no:";
    cin>>n;
    while(n>=1)
    {
               r = n%2;
               n = n/2;
               cout<<r;
    }
    
    getch();
            
}
