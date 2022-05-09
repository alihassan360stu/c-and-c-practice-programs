#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int balance;
      int *balpter;
      int value;
      
      balance=0;
      balpter=&balance;
      value=*balpter;
      cout<<"The result of VAlue is ="<< value ;
      
      getch();
      
}
