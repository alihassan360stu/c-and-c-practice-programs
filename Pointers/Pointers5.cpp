#include <iostream>
//#include <conio.h>

using namespace std;

void swap(int &a, int &b){
	int c=a;
	a=b;
	b=c;
	
	cout<<"after swift the value of a and b      "<<a<<"     "<<b<<"\n\n";
}

main()
{
      int a,b;
      cout<<"Enter two integers : ";
      cin>>a>>b;
      cout<<"before  swift the value of a and b        "<<a<<"     "<<b<<"\n\n";
      
      swap(a,b);
      cout<<"Values after Swap : "<<endl;
      cout<<a<<endl;
      cout<<b<<endl;
    //  getch();
}
