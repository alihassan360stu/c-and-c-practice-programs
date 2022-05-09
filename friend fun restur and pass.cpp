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

friend int add(ali);	
};
void ali::gatdata()
{
	cout<<"Enter teo number ";
	cin>>d>>l;
}

 int add (ali x)
 {

 	int res;
     res=x.d+x.l;
 	return(res);
 	
 	

 }

 int main()
 {
 	ali rest;
 	rest.gatdata();
    int re;
 	re=add(rest);
 	cout<<re;
 }
