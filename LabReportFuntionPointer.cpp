/* 
the following program finds wether a number is even/odd
prime/composite greater than 10 or not and finds factorial too.
all this work is done through functions with returning only factorial
remaining part is done through pointers to change values of variables
local to main function from other functions...
*/
#include<conio.h>
#include<iostream>

using namespace std;

int checkNumber(int, bool *, bool *, bool *);
void checkIsPrime(int, bool *);
void checkIsEven(int, bool *);
void  checkIsGreater(int, bool *);
int factorial(int);

main()
{
      bool isPrime, isGreater, isEven;
      int fact;
      int input;
      cout<<"Please enter an integer : ";
      cin>>input;
      fact = checkNumber(input, &isPrime, &isEven, &isGreater);
      cout<<"\n\nProperties of "<<input<<" : "<<endl<<endl;
      cout<<"IsPrime : "<<((isPrime)?"Yes":"No")<<endl;
      cout<<"IsEven : "<<((isEven)?"Yes":"No")<<endl;
      cout<<"IsGreater than 10 : "<<((isGreater)?"Yes":"No")<<endl;
      cout<<"Factorial is "<<fact;
      getch();
}

int checkNumber(int a, bool *isPrime, bool *isEven, bool *isGreater)
{
    checkIsPrime(a, isPrime);
    checkIsEven(a, isEven);
    checkIsGreater(a, isGreater);
    return factorial(a);
}

void checkIsPrime(int a, bool *isPrime)
{
     bool flag = true;
     for(int i = 2; i <a; i++)
     {
             if(a%i==0)
             {
                       flag =false;
                       break;
             }
     }
     if(flag)
           *isPrime = true;
     else
           *isPrime = false;
}

void checkIsEven(int a, bool *isEven)
{
     if(a%2==0)
          *isEven = true;
     else
          *isEven = false;
}

void checkIsGreater(int a, bool *isGreater)
{
     if(a>10)
         *isGreater = true;
     else
         *isGreater = false;
}

int factorial(int a)
{
    int fact = 1;
    for(int i = 2; i<=a; i++)
         fact *= i;
    return fact;
}
