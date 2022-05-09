#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
      int choice, n1, n2;
      while(1)
      {
              cout<<"1. Add two Numbers"<<endl;
              cout<<"2. Subtract two Numbers"<<endl;
              cout<<"3. Multiply two Numbers"<<endl;
              cout<<"4. Divide two Numbers"<<endl;
              cout<<"5. or any other key to exit"<<endl;
              cout<<"Select any choice : ";
              cin>>choice;
              cout<<endl<<endl<<"Enter two numbers : ";
              if(choice>0 && choice<5)
              {
                  cin>>n1>>n2;
              }
              switch(choice)
              {
                  case 1:
                       cout<<endl<<endl<<"Sum is "<<(n1+n2)<<endl;
                       break;
                  case 2:
                       cout<<endl<<endl<<"Difference is "<<(n1-n2)<<endl;
                       break;
                  case 3:
                       cout<<endl<<endl<<"Product is "<<(n1*n2)<<endl;
                       break;
                  case 4:
                       cout<<endl<<endl<<"Quotient is "<<(n1/n2)<<endl;
                       break;
                  default:
                          goto azzaz;
              }
      }
      azzaz:
      return 0;
}
