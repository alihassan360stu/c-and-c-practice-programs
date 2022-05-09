#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      cout<<"Press any key...";
      char input = getch();
      cout<<"\n";
      for(int i = 0; i<30; i++)
      {
              for(int j=0; j<10; j++)
              {
                      char ch = (char) i*10+j;
                      if(ch == input)
                      {
                            cout<<(int)ch<<" value found...";
                      }
              }
      }
      getch();
}
