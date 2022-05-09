#include<iostream>
using namespace std;

int add (void);    // function prototype 


int main()
{
	hass:
		
	int r;
	r=add();   //   function calling
	cout<<"add  is = "<<r;  	
	cin.get();
	cin.get();
	system("cls");
	goto hass;
}
int add (void)  //  function difination

{
	cout<<"enter two number \n\n";
	int a,b;
	cout<<"enter first number : ";
	cin>>a;
	cout<<"\n\n enter second number : ";
	cin>>b;
	 
    int c=a+b;
    return(c);
    
}

