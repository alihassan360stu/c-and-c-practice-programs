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
                    temp/=8;
                    c++;
      }
      int array[c];
      c=0;
      do
      {
                     array[c] = input%8;
                     input = input/8;
                     c++;
      }while(input>=1);
      for(int i = c; i>0; i--)
      {
              cout<<array[i-1];
      }
      getch();
}
