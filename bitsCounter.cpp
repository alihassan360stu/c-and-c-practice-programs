#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int bits=0;
      int input;
      cout<<"Please enter any number : "; cin>>input;
      do
      {
                     input = input/2;
                     bits++;
      }while(input>=1);
      /* remove these comments in case if you are using while loop
      instead of do while
      if(bits == 0)
      {
              bits++;
      }*/
      cout<<"Your input occupy "<< bits <<" bit(s)";
      getch();
}
