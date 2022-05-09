#include<iostream>
using namespace std;

class ali
{
int d,k,l;
public:
void getdata (void);
void putdata(void);

 ali add (void);	

};
void ali :: getdata()
{
	cin>>d>>k;
	cout<<"\n\n";
}

void ali::putdata()
{
	cout<<l;
}

ali ali :: add()
{
	
	ali h;
	h.getdata();

	h.l=h.d+h.k;
	return(h);
	
}

int main()
{
	ali re,data;
	
	re=data.add();
	re.putdata();
}

