#include<iostream>
using namespace std;

class ali
{
int d,k,l;
public:
void getdata (void);
void putdata(void);

 ali add (ali);	

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

ali ali :: add(ali x)
{
	
	ali h;
	

	h.l=x.d+x.k;
	return(h);
	
}

int main()
{
	ali re,data;
	data.getdata();
	re=data.add(data);
	re.putdata();
}

