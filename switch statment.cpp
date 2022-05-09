#include<iostream>
using namespace std;
int main()
{
	int num1,num2,add,mul ,sub ,div,opp;
	cin>>num1>>num2;
	char op='-';
	switch(op)
	{
		case '+':
			{
				add=num1+num2;
				cout<<"addition is "<<add<<endl;
				break;
			}
		case '*':
			{
				mul=num1*num1;
				cout<<"multyplication is  "<<mul<<endl;
				break;
			}
			case '-':
				{
					sub=num1-num2;
					cout<<"substrection is  "<<sub<<endl;
					break;
				}
			case '/':
					{
						div=num1/num2;
						cout<<"division is  "<<div<<endl;
						break;
					}
	}
}
