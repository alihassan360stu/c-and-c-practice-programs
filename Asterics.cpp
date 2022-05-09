#include<iostream>
#include<conio.h>

using namespace std;

main()
{
	int x,y;
	x = 0;
	while(x<7)
	{
		y=0;
		while(y<=x){
			cout<<"*";
			y++;
		}
		cout<<endl;
		x++;
	}
	getch();
}
