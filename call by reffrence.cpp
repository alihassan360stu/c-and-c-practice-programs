#include<iostream>
#include<conio.h>
using namespace std;

class stud
{
	int a;
	public:
	void get(void);
	void dis(void);
	void add(stud&,stud&);	
};

void stud:: get(void)
{
	system("color 2");
	cout<<"Enter number \n\n";
	cin>>a;
	cout<<"\n\n";
}
 
void stud::dis(void)
{
	cout<<"\n Answer is "<<a;
 } 
 
 void stud ::add (stud &x,stud &y)
 {
 	a= x.a + y.a;
 }
 
 int main()
 {
 	stud a,b,re;
 	a.get();
 	b.get();
 	
   re.add(a,b);
   re.dis();

 getch();
 }
