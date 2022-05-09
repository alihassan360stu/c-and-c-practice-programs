#include <iostream>
#include <conio.h>

using namespace std;

main(){
       int arr[5] = {12, 43, 36, 8, 7};
       int c, s = 0;
       
       for(c = 0; c<=5; c++)
       {
             if(arr[c]%3 == 0)
             {
                         cout<<arr[c]<<"\n";
                         s+=arr[c];
             }
             cout<<"Sum = "<< s<<"\n";
       }
       getch();       
}
