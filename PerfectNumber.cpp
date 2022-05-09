#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int sum = 0,flag = 0;
    for(int i=1; i<1000; i++)
    {
        sum = 0;
        flag = 0;
        for(int k=1; k<i; k++)
        {
            if(i%k==0)
                sum+=k;
            if(sum == i)
            flag = 1;
        }
        if(flag) cout<<i<<"  ";
    } 
    getch();
}
