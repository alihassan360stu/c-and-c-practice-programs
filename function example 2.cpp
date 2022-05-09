#include<iostream>
using namespace std;
float mul(float,float,float);

int main()

{
	system("cls");
	label:
		
	float a,b,c,div;
	cout<<"enter tree number : \n\n";
	cin>>a;
	cout<<"\n";
	cout<<"\n";
	cin>>b;
	cout<<"\n";
	cout<<"\n";
		cin>>c;
	cout<<"\n";
	cout<<"\n";

	div=mul(a,b,c);
	//cin.get();
	goto label;
	return 0;
	
}

float mul(float x,float y,float p)

{
	
	float t;
	t=x+y+p;
	cout<<"total value ";
	cout<<t;
	cout<<"\n";
	cout<<"\n";
	return(t);
}
