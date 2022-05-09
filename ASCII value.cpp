#include<iostream>
#include<conio.h>

using namespace std;

main()
{
      int a;
      char input;
      cout<<"press any key ";
      input = getche();
      do
      {
        a=input;
        cout<<"\nThe ASCII value of "<< input << " is " << a;
        cout<<endl;
        cout<<"press any key ";
        input = getche();
      }while(input!='\r');
      getch();
}
