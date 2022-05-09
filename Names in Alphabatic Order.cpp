#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char NAME[6][100], TEMP[15];
    int i,j, c;
    cout<<"Enter any Six Names: \n";
    for(int c = 0; c<6; c++)
    {
    cout<<c+1<<". ";
    gets(NAME[c]);
    }
     
    // sorting process starts here
    for(int i=0; i<6; i++)
    for(int j=0; j<6; j++)
      if(strcmp(NAME[j],NAME[j+1])>0)
        {
        strcpy(TEMP,NAME[j]);
        strcpy(NAME[j],NAME[j+1]);
        strcpy(NAME[j+1],TEMP);
        }
    
    cout<<"\nNames in order are :\n";
    for(int c = 0; c<6; c++)
    {
    cout<<c+1<<". ";
    cout<<(NAME[c])<<endl;
    }
    
    getch();
}
