#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int input, c=0, temp;
      cout<<"Enter any Decimal number ? ";cin>>input;
      temp = input;
      while(temp>=1)
      {
                    temp/=16;
                    c++;
      }
      int array[c];
      c=0;
      do
      {
                     array[c] = input%16;
                     input = input/16;
                     c++;
      }while(input>=1);
      for(int i = c; i>0; i--)
      {
              if(array[i-1]==10)
                                cout<<"A";
              else if(array[i-1]==11)
                                cout<<"B";
              else if(array[i-1]==12)
                                cout<<"C";
              else if(array[i-1]==13)
                                cout<<"D";
              else if(array[i-1]==14)
                                cout<<"E";
              else if(array[i-1]==15)
                                cout<<"F";

              else
                                cout<<array[i-1];
      }
      getch();
}
