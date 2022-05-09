#include<iostream>
using namespace std;

class ali

{
	
	
int d;
public:
void gete(  void);
void get(void);
ali add (ali,ali);	

};



void ali ::get ()
{ 

d=0;
cin>>d;

}

void ali ::gete ()
{
	
cout<<d;

}
ali ali :: add(ali x,ali y)
{
ali  f;

f.d=x.d+y.d;  
	
}


int main()
{
	ali a,b,g ,result;
	a.get();
	b.get();
	cout<<"\n\nfirst value \n\n";
	a.gete();
	cout<<"\n\nSecond value is \n\n";
	b.gete();
	result =g.add(a,b);
	
	cout<<"\n\n anser is ";
	result.gete();
}
