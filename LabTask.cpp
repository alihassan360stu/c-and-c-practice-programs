#include <iostream>
#include <conio.h>

using namespace std;

int checkNumber(int, bool*, bool*, bool*);
void checkPrime(int, bool*);
void checkEven(int, bool*);
void checkGreater(int, bool*);
int factorial(int);

main()
{
      bool isPrime = false, isGreater = false, isEven = false;
      int input;
      cout<<"Please enter any integer : ";cin>>input;
      int fact = checkNumber(input, &isPrime, &isGreater, &isEven);
      cout<<"\n\nProperties of "<<input<<endl;
      cout<<((isPrime)?"Prime":"Composite")<<endl;
      cout<<((isGreater)?"Greater than 10":"Not Greater than 10")<<endl;
      cout<<((isEven)?"Even":"Odd")<<endl;
      cout<<"Factorial is : "<< fact;
      getch();     
}

int checkNumber(int input, bool *isPrime, bool *isGreater, bool *isEven)
{
     checkPrime(input, isPrime);
     checkGreater(input, isGreater);
     checkEven(input, isEven);
     return factorial(input);
}

void checkPrime(int input, bool *isPrime)
{
     bool flag = true;
     for(int i = 2; i < input ; i++)
     {
             if(input%i==0)
             {
                   flag = false;
                   break;
             }
     }
     if(flag)
         *isPrime = true;
     else
         *isPrime = false;
}

void checkGreater(int input, bool *isGreater)
{
     if(input>10)
         *isGreater = true;
     else
         *isGreater = false;
}

void checkEven(int input, bool *isEven)
{
     if(input%2==0)
         *isEven = true;
     else
         *isEven = false;
}

int factorial(int input)
{
    int fact = 1;
    for(int i = 1; i <= input; i++)
            fact *= i;
    return fact;
}

