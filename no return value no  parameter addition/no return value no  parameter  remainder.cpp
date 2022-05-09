#include<iostream>
#include<conio.h>
using namespace std;
void rem (void)
{
  int a,b,result;
  cout<<"\t Enter two number \n\n";
  cout<<" \t Enter first number : ";
  cin>>a;
  cout<<"\n\n";
  cout<<" \t Enter second number : ";
  cin>>b;
  result=a%b;
  cout<<"\t remainder is  =  "<<result;
}
int main()
{
	rem();
	getch();
}
