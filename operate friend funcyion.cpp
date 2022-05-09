#include<iostream>
using namespace std;
class hassan;
class ali
{
	int a;
};

class hassan
{
	int b;
	public :
	void getda()
	{
		cin>>b;
	}
	friend void ali :: add();
};

 void ali :: add()
{
ali h;
cout<<h.a;
}

int main()
{
	hassan k;
	k.add();
}
