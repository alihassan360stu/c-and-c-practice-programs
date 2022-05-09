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
                    temp/=2;
                    c++;
      }
      int array[c];
      c=0;
      while(input>=1)
      {
                     array[c] = input%2;
                     input = input/2;
                     c++;
      }
      for(int i = c; i>0; i--)
      {
              cout<<array[i-1];
      }
      getch();
}
