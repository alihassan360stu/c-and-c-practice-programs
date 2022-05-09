#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int*p;
    int num=99;
    
    p=&num;
    
    cout<<num<<' ';
    (*p)++;
    cout<<num<<' ';
    (*p)--;
    cout<<num<<' ';  
      getch();
      
}
