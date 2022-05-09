#include<iostream>
using namespace std;
int main()
{

	hass:
	int a,b;
	cout<<"enter two number \n\n";
	cin>>a>>b;
	cin.get();
	system("cls");
	if(a>b)
	{
		cout<<"\n\n\n";
		cout<<"first number is greater then second \n\n\n";
	}
	else if(a==b)
	{
		cout<<"\n\n\n";
	cout<<"both are equal \n\n\n";
	}
	else 
	{
		cout<<"\n\n\n";
		cout<<b<< "  is greather then  \n\n\n  " <<a;
	}
	goto hass;
}
