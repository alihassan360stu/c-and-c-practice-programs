#include <iostream>
#include <conio.h>
void wordsCount(void);
using namespace std;
main()
{
      wordsCount();
      getch();
}

void wordsCount()
{
     int count = 1;
     char input;
     while((input=getche())!='\r')
     {
            if(input == ' ')
            {
                     count++;
            }
     }
     cout<<"\ntotal words counted are "<< count;
}
