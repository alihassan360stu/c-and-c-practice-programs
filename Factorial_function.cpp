#include<iostream>
#include<conio.h>
int findFactorial(int);

using namespace std;

main()
{
      int fact, input;
      cout<<"Please enter a number : ";
      cin>>input;
      fact = findFactorial(input);
      cout<<"The factorial is " << fact;
      getch();
}

int findFactorial(int a)
{
    int fact = 1;
    for(int i = 2; i<= a; i++)
    {
            fact *= i;
    }
    return fact;
}
