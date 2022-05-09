#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, sum = 0;
    cout<<"\t::THIS PROGRAM ADDS NUMBERS UNLESS \"-1\" IS ENTERED IN THE INPUT::";
    cout<<"\n\nENTER THE NUMBERS:\n";
    while(!(a==-1))
    {
     
      cin>>a;
      sum = sum + a;
      
    }
    cout<<"SUM IS =  "<<sum+1;
    cout<<"\n\nTHROUGH FOR LOOP: \n";
    int b, sum2=0;
    for(; (!(b==-1)); )
    {
          cin>>b;
          sum2 = sum2 + b;
    }
    cout<<"Sum is = "<<sum2+1;
    getch();
}
