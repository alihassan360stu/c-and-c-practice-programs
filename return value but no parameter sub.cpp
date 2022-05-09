#include<iostream>
using namespace std;

int sub (void);    // function prototype 


int main()
{
	hass:
		
	int r;
	r=sub();   //   function calling
	cout<<"sub  is = "<<r;  	
	cin.get();
	cin.get();
	system("cls");
	goto hass;
}
int sub (void)  //  function difination

{
	cout<<"enter two number \n\n";
	int a,b;
	cout<<"enter first number : ";
	cin>>a;
	cout<<"\n\n enter second number : ";
	cin>>b;
	 
    int c=a-b;
    return(c);
    
}

