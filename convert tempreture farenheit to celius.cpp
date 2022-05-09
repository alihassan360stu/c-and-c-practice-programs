#include<iostream>
using namespace std;
int main()
{
	cout<<"convert tempreture fahrenteitto to celsius\n";
	
	float farenheit,celsius;
	cout<<"\nput the value of tempreture\n\n";
	
	cin>>farenheit;
	celsius=(farenheit-32)*5/9;
	
	cout<<endl;
	cout<<"fahrenhiet to celsius="<<celsius<<endl;
	
}
