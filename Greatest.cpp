#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, arr[5], max = 0, p = 0;
    for(int i=0;i<5;i++)
    {
            cout<<"ENTER VALUE IN INDEX "<<i<<" OF THE ARRAY: ";
            cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
            if(max<arr[i])
            max = arr[i];
            
    }
    cout<<"GREATEST NUMBER IS : "<<max<<endl;
    getch();
}
