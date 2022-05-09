#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int input;
      cout<<"Please enter any number : "; cin>>input;
      while(input>9)
      {
                    cout<<input%10<<"\n";
                    input = input/10;
      }
      cout<<input;
      getch();
}
