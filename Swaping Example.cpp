#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int a, b;
      cout<<"Enter a number : "; cin>>a;
      cout<<"Enter another number : "; cin>>b;
      b = a+b;
      a = b-a;
      b = b-a;
      cout<<"Values after swaping : \n";
      cout<<"a = "<<a;
      cout<<"\nb = "<<b;
      getch();
}
