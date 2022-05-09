#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int N, R, sum = 0;
    cout<<"Enter a Number: ";
    cin>>N;
    while(N>0)
    {
            
            R = N%10;
            N = N/10;
            /*sum = sum + R;   For displaying sum of the digits of a number: 
            cout<<"sum is = "<<sum;*/
            cout<<R; // For displaying Reverse of the entered Number:  
    }
    //getch();
}
