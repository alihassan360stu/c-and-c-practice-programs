#include<iostream>
using namespace std;
int main()
{

int firstno=9,secondno=6,thirdno=5,fourth=2;
if(firstno>secondno)

{
	 if(secondno>thirdno)
	{
		cout<<"first number is greater then all";
	}
	else if(secondno>firstno)
	{
		cout<<"second number is greater then all";
	}
	else if(thirdno>secondno)
	{
		cout<<"third number is greater then all";
	}
	else if(thirdno>fourth)
	{
	cout<<"fourth number is greater then all";	
	}
}
}
