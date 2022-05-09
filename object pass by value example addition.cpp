#include<iostream>
using namespace std;

class ali
{
int item;
public :
	
void getdata (void); 
void getdata_1 (void); 

void putdata (void); 

void addi (ali,ali);

};


void ali :: getdata()
{
cout<<"Enter first value ";
cin>>item;	
cout<<"\n\n";
}


void ali :: getdata_1(void)
{
cout<<"Enter second value ";
cin>>item;
cout<<"\n\n";	
}

void ali :: putdata()
{
	cout<<"Answer is "<<item;
	cout<<"\n\n\n\n\n";
	
}


void ali :: addi (ali x,ali y)
{
item=x.item+y.item;	
}


int main()
{		
ali a,b,res;
a.getdata();
b.getdata_1();
res.addi(a,b);
res.putdata();

}
