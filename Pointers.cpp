#include<iostream>
#include<conio.h>
using namespace std;
void Greater(int, int *);
int Factorial(int);
int CheckNumber(int , int *, int *, int*);
void Even(int, int *);
void Prime(int, int *);
int main()
{
    int Num = 5,isgreater=0, iseven=0, isprime=0;
    int fact = CheckNumber(Num,&isgreater, &iseven, &isprime);
    cout<<"Original Number is: "<<Num<<endl;
    cout<<"Number is Greater or Less Great[1], less[0] "<<isgreater<<endl;
    cout<<"Is The Number Prime?"<<isprime<<endl;
    cout<<"Is The Number Even? Even[1], Odd[1] "<<iseven<<endl;
    cout<<"factorial is "<<fact;
    getch();
}
int CheckNumber(int num, int *great, int *even, int *prime)
{
Prime(num, prime);
Even(num, even);
Greater(num, great);
return Factorial(num);
}
int Factorial(int num)
{
    int fact = 1;
     for(int i=1; i<=num; i++)
     {
             fact = fact*i;
     }
     return fact;
}
void Prime(int num, int *pr)
{
    int flag = true;
    for(int i=2; i<num; i++)
    {
            if(num%i==0)
            flag = 1;
            break;
    }
    if(flag) {*pr = true;}
    else {*pr =  false;}
}
void Even(int num, int *even)
{
     if(num%2==0)
     *even = true;
     else {*even = false;}
}
void Greater(int num, int *great)
{
     if(num>10)
     {*great =  true;}
     else {*great =  false;}
}
