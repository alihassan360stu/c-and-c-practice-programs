#include<iostream>
using namespace std;
int main()
{ 
	
    int ali[2][3];
	
	for (int i=0;i<2;i++)
	{
	 for(int j=0;j<3;j++)
	 {
	 
	 cin>>ali[i][j];
     }
	}
	
	cout<<"\n\n";
	
 int alih[2][3];
	
	for (int i=0;i<2;i++)
	{
	 for(int j=0;j<3;j++)
	 {
	 
	 cin>>alih[i][j];
     }
	}
	cout<<"\n\n";
	
	
	cout<<"\n\nyour first matrix \n\n";
	
	for (int i=0;i<2;i++)
	{
	 for(int j=0;j<3;j++)
	 {
	 
	 cout<<ali[i][j];
     }
     cout<<"\n\n";
	}
	
	
	
	cout<<"\n\n your second matrix \n\n";
	
	for (int i=0;i<2;i++)
	{
	 for(int j=0;j<3;j++)
	 {
	 
	 cout<<alih[i][j];
	 }
	 cout<<"\n\n";
	}
	
	cout<<"\n\n";
	
	int sum[2][3];
	
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		
		{
		sum[i][j]=ali[i][j]+alih[i][j];
		 cout<<sum[i][j];	
		}
		cout<<"\n\n";
	}
	
	
	
	
}
