#include<iostream>
#include<conio.h>
int countWords(void);

using namespace std;

main()
{
      int count = countWords();
      cout<<"\nTotal words count = " << count;
      getch();
}

int countWords()
{
     int wordsCount = 1;
     char input = ' ';
     do
     {
                   if(input ==  ' ')
                   {
                            wordsCount++;
                   }
     }while(input=getche()!='\r');
     return wordsCount;
}
