#include<iostream>
using namespace std;

class ali
{
	int l;
int d;
int k;
public:
void gatdata (void);
void putdata(void);

friend int add();	
};
void ali::gatdata()
{
	cout<<"Enter teo number ";
	cin>>d>>l;
}

 int add ()
 {
 	ali ha;
 	ha.gatdata();
 	int res;
     res=ha.d+ha.l;
 	return(res);
 	
 	

 }

 int main()
 {
    int re;
 	re=add();
 	cout<<re;
 }
