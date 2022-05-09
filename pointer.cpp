#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int faisal(int ,bool*,bool*,bool*);
      int a,fact;
      bool even=0, greater=0, composite=0;
      cout<<"enter the number =";
      cin>>a;
      fact=faisal(a,&even,&greater,&composite);
      cout<<"is the number is even="<<even<<endl;
      cout<<"is the number is greater than 10="<<greater<<endl;
      cout<<"is the number is composite ="<<composite<<endl;
      cout<<"factorial of"<<a<<"="<<fact;                    + 
      
      getch();
      }
      int faisal (int x,bool*even,bool*greater,bool*composite)
      {
          if(x%2==0)
          *even=1;
          if(x>10)
          *greater=1;
          for(int i=2; i<x; i++)
          if(x%i==0)
          *composite=1;
          int fact=1;
          for(int e=1; e<=x; e++)
          fact=fact*e;
          return fact;
          }
