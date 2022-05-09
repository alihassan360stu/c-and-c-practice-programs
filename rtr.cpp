#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char arr[10];
    int i = 0, c=1;
    cout<<"Please Enter a Word: "; cin>>arr;
    int length = 0;
    while(arr[i]!='\0')
    {
    length++;
    i++;
    }
    for(int i = 0, j = length-1; i<length/2; i++,j--)
    {
            if(arr[i]!=arr[j])
            {
                 c = 0;
                 break;
            }
    }
    if(c)
    {
         cout<<"Palandrom...";
    }
    else
    {
        cout<<"Not a Palandrom...";
    }
getch();
}
