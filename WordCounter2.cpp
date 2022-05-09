#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int wordCount = 1;
      char ch;
      while(1)
      {
              ch = getch();
              cout << ch;
              if(ch == ' ' )
                    wordCount++;
              if(ch == '\r')
                    break;
      }
      cout<<"\nTotal words enterd... " << wordCount;
      getch();
}
