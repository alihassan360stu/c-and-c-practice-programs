#include<iostream>
using namespace std;

class ali
{
int a,b;
public :

void get(void);
void putdata(void);
 friend int add(ali,ali);
};
void ali :: get(void)
{
	cin>>a;


}
void ali :: putdata()
{
	cout<<a;
}

int add(ali x,ali y)
{

 int re;
 re=x.a+y.a;
 return re;
	
}

int main()
{
	ali a,b;
	a.get();
	b.get();
	int res;
	res=add(a,b);
	
	cout<<res;
}
