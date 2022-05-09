#include<iostream>
using namespace std;
int main()
{
	cout<<"convertion\n\n\n";

	float cel,temp;
	double b,u,s;
	cout<<"put the value of tempreture\n\n";
	
	b=32;
	u=5;
	s=9;
	
	cel=u/s;
	cel=b*cel;
	cel=cel-temp;
	
	cin>>temp;
	cel=(temp-b)*u/s;
	
	cout<<"\nvalue of celcius="<<cel<<endl;
}
