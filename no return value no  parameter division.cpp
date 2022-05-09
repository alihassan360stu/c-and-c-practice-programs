#include<iostream>
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
  cout<<"\n\n\n\n";
  result=a%b;
  cout<<"\t remainder is  =  "<<result;
}
int main()
{
	rem();
}
