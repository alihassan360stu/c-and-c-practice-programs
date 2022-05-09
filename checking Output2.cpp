#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      char str[10] = "AEDI DOOG";
      int c, s = 0;
      
      for(s = 0; str[s]!='\0'; s++)
      {
            for(c=s+1; c>0; c--)
            {
                     cout<<str[c-1];
            }
      }
      getch();
}
