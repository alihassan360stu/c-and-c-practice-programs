#include <iostream>
#include<conio.h>
#define clrscr() system("cls");
using namespace std;
int main()
{
    int c, words = 0, chr = 0, spaces = 0, the = 0, vowels = 0, ind =0;  
    char a, sel;
saif:cout<<"\t\tWORDs, CHARACTERs, SPACEs, THEs, AND VOWELs COUNTER: \n\n";   
    while(a!=13)
    {
    a = getche();
    chr++;
       if (a==' ')
       {
       words++;
       }
       if(a==' ')
       {
       spaces++;
       }
       
       
       if((a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U'))
       {
         vowels++;
       }
if((a=='t')||(a=='h')||(a=='e')||(a=='T')||(a=='H')||(a=='E'))
{
   if((a=='t')||(a=='T'))
    {   
    ind = 1;
    }
    if((ind==1)&&(a=='h')||(a=='H'))
    {
    ind = 2;
    }
    if((ind==2)&&(a=='e')||(a=='E'))
    {
    ind = 3;
    the++;
    }
}
     else
     {
     ind = 0;
     } 
     
}
   cout<<"\n\nWORDS  = "<<words+1<<endl;
   cout<<"SPACES  = "<<spaces<<endl;
   cout<<"VOWELS  = "<<vowels<<endl;
   cout<<"THE  = "<<the<<endl;
   cout<<"CHARACTERS  = "<<chr<<endl;
   


    getch();
}
