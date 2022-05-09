#include <conio.h>
#include <iostream>
using namespace std;

	struct data
{
       char n[15];
       char ad[25];
       char pcode[9];
};
 
main()
{     
      data abc[10];
	  int i;
      for(i=0;i<10;i++)
      {
                       cout<<"enter name of person :"<<i+1;
                       gets(abc[i].n);
					   cout<<endl<<endl;
                       cout<<"enter address of person :"<<i+1;
                       gets(abc[i].ad);
					   cout<<endl<<endl;
                       cout<<"enter  postal code of person :"<<i+1;
                       gets(abc[i].pcode);
                       cout<<endl<<endl;
      }
       for(i=0;i<10;i++)
      {
                       cout<<"name of person "<<i+1<<" is :"<<abc[i].n<<endl<<endl<<endl;
                       cout<<"entered address of person"<<i+1<<" is :"<<abc[i].ad<<endl<<endl<<endl;
                       cout<<"entered  postal code of person "<<i+1<<" is :"<<abc[i].pcode<<endl<<endl<<endl;
      }

getch();
}
