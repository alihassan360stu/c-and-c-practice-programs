#include<iostream>
using namespace std;

class ali
{
int item[3][3];
public :
	
void getdata (void); 

void putdata (void); 

void addi (ali,ali);

};

void ali :: getdata()
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		
		cin>>item[i][j];
	    }
	    cout<<"\n";
	}
	
}


void ali :: putdata()
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		
		
		cout<<item[i][j]<<"\t";
	    }
	    	cout<<"\n\n";
	}
}


void ali :: addi (ali x,ali y)
{
	

	for (int i=0; i<3; i++)
	{
		for (int j=0 ;j<3;j++)
		{
		
		item[i][j]=x.item[i][j]+y.item[i][j];
	    }
	}
}


int main()
{
	ali a,b,res;
	
cout<<"\n First metrix \n";
a.getdata();
cout<<"\n second matrix \n";
b.getdata();
cout<<"\n Your enterd matrix is \n";
a.putdata();
cout<<"\n Your second entrence matrix is  \n";
b.putdata();
res.addi(a,b);
cout<<"\n Answer is \n";
res.putdata();
}
