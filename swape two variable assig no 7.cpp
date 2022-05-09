#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\tswapping two number\n\n\n";
	int first,second,result;
	cout<<"enter number 1\n";
	cout<<endl;
	cin>>first;
	cout<<"enter number 2\n";
	cout<<endl;
	cin>>second;
	cout<<"\n before swapping first value="<<first;
	cout<<"\n\n secobd value="<<second<<endl,
	cout<<endl;
	result=first;
	first=second;
	second=result;
	cout<<"after swapping first value="<<first;
	cout<<"\n\nsecond value="<<second<<endl;
}
