#include<iostream>
using namespace std;

float rem (void);    // function prototype 


int main()
{
	hass:
		
	float r;
	r=rem();   //   function calling
	cout<<" \n\n  remainder   is = "<<r;  	
	cin.get();
	cin.get();
	system("cls");
	goto hass;
}
float rem (void)  //  function difination

{
	cout<<"enter two number \n\n";
	int a,b;
	cout<<"enter first number : ";
	cin>>a;
	cout<<"\n\n enter second number : ";
	cin>>b;
	 
    int c=a%b;
    return(c);
    
}

