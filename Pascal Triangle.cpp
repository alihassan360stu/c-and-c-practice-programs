#include<conio.h>
#include<iostream>

using namespace std;

void printElement(int, int);
int factorial(int);

main()
{
      int rows;
      cin>>rows;
      for(int i = 0; i<rows; i++)
      {
              for(int j=0; j<=i; j++)
              {
                      printElement(i,j);
              }
              cout<<"\n";
      }
getch();
}

void printElement(int i, int j)
{
     int result = 0;
     result = factorial(i)/(factorial(j)*factorial(i-j));
     cout<<result<<"\t";
}

int factorial(int a)
{
    int fact = 1;
    for(int i = 1; i<=a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
