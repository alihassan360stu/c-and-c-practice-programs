#include<iostream>
using namespace std;
int main()
{
	int nume1,nume2,add,sub,div,mul;
	char op='-';
	cin>>nume1>>nume2;
	if (op=='+')
	{
		add=nume1+nume2;
      cout<<" addition is  "<<add<<endl;
	}
	else if(op=='/')
	{
		div=nume1/nume2;
		cout<<"division is "<<div<<endl;
	}
	else if(op=='-')
	{
		sub=nume1-nume2;
		cout<<"substrection is "<<sub<<endl;
	}
	else if(op=='*')
	{
		mul=nume1*nume2;
		cout<<"multiplication is "<<mul<<endl;
	}
}
