#include <iostream>
#include <conio.h>

using namespace std;

main(){
       int fact, input;
       do
       {
           fact = 1;
           cout<<"\nEnter any number : ";cin>>input;
           for(int i = 2; i <= input ; i++)
           {
              fact *= i;
           }
           cout<<"Fact is : "<<fact;
           cout<<"\nPress e to exit...";
       }while(getch()!='e');
}
