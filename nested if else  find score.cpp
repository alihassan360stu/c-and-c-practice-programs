#include<iostream>
using namespace std;
int main()
{
	int score;
	cin>>score;
	if(score>100)
	{
		cout<<"please  enter  between 0   t0   100";
	}
	
	else if(score>=90)
	{
	cout<<" your grade is a + ";
	}
	
	else if(score>=80)
	{
		cout<<" your grade is a";
	}
	
	
	
	else if(score>=70)
	{
		cout<<" your grade is b";
	}
	
	
	else if(score>=60)
	{
		cout<<"your grade is c ";
	}
	
	
	else
	{
		cout<<"you grade  is f (fail)";
	}
}
