#include<iostream>
using namespace std;

int  main()
{
char a[3][20] ;


for(int i=0;i<3;i++)
{
	for(int j=0;j<20;j++)
	{
		cin>>a[i][j];
	}
	cout<<"\n";
}

for(int i=0;i<3;i++)

{
	for(int j=0;j<20;j++)
	{
		cout<<a[i][j];
	}
	cout<<"\n";
}
}

