#include<iostream>
using namespace std;
int main()
{
	int num1=10,num2=5,add,mul ,sub ,div;
	
	char op='-';
	if (op=='-')
		{
				add=num1+num2;
			cout<<"addition is "<<add<<endl;
        }       
	
	     else if(op=='*')
		{
		mul=num1*num1;
		cout<<"multyplication is  "<<mul<<endl;
		}
		else if(op=='-')
		{
			sub=num1-num2;
			cout<<"substrection is  "<<sub<<endl;
		}
       else
		{
			div=num1/num2;
			cout<<"division is  "<<div<<endl;
		}
	
}
