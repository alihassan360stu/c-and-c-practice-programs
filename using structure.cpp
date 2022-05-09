#include<iostream>
using namespace std;

struct student
	{
		char name[20];
		int fess=150;
		int roll;
		float gpa;
		
		
	};
int main()
{
	struct student al[3];
	for (int i =1; i<=3 ;i++)
	{
	cout<<"\t  Enter "<<i<<" person Detail \n\n\n";
	cout<<"Enter name  ";
	cin>>al[i].name;
	cout<<"\n\n";
	cout<<"Enter roll num   ";
	cin>>al[i].roll;
	cout<<"\n\n";
	cout<<"Enter GPA  ";
	cin>>al[i].gpa;
	cout<<"\n\n *****************************  \n\n";
	}
	system("cls");
	
	
	for (int i= 1; i<=3 ;i++)
	{
		cout<<"  "<<i<<" Person detail  \n\n\n\n";
		cout<<"\n\n Name is  "<<al[i].name;cout<<"\n\n Name is  "<<al[i].gpa;
		cout<<"\n\n Name is  "<<al[i].roll;
		cout<<"\n\n Name is  "<<al[i].gpa;
		cout<<"\n\n Name is  "<<al[i].fess;
		cout<<"\n\n*******************************\n\n";
	}
return 0;	
}
	

