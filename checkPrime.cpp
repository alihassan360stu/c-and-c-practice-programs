#include<iostream>
#include<conio.h>

using namespace std;

main()
{
      int input;
      bool flag = true;
      cout<<"Please enter a number : ";
      cin>>input;
      for(int k = 2; k < input; k++)
      {
              if(input%k==0)
              {
                            flag = false;
                            break;
              }
      }
      if(flag)
      {
              cout<<"The number is prime.";
      }
      else
      {
              cout<<"The number is composite.";
      }
      getch();
}
