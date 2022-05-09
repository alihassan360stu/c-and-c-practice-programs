#include<iostream>
using namespace std;
class hass;
class ali
{
	int a,b;
	public:
	void dis();
	friend int add(ali,hass);
};

class hass
{
	int c,b;
	public :
	void get();
	friend int add(ali,hass);
};

void ali :: dis()
{
	cin>>a;
}

void hass :: get()
{
	cin>>b;
}
int add(ali x,hass y)
{
	int re;
	re=x.a+y.b;
	return re;
}
int main()
{
	ali g;
	hass o;
	g.dis();
	o.get();
	int res;
	res=add(g,o);
	cout<<res;
}

