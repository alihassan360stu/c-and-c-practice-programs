/*
  Name: MY NAME
  Copyright: Not Reserved, Open to all over there.
  Author: Saif Ur Rehman
  Date: 11/05/10 20:41
  Description: This Program uses the gotoxy function to Print the ascii code in
               specific directions, specified by me(SAIF). 
              
*/
#include<iostream>
#include<conio.h>
#include<windows.h>           
void gotoxy(int x, int y);    
using namespace std;
int main()
{
     char z = 15;
    for(int a = 10; a<20; a++)
    {
            gotoxy(a,4); cout<<z;
            gotoxy(a,8); cout<<z; 
            gotoxy(a,12); cout<<z;
    }                              
                                 
    for(int b=4; b<=8; b++)        
    {
            gotoxy(10,b);cout<<z;
    }
    for(int i=9; i<=12; i++)
    {
           gotoxy(19,i);cout<<z;
    }
    for(int i=4; i<=12; i++)
    {
            gotoxy(22,i);cout<<z;
            gotoxy(30,i);cout<<z;
    }
    for(int b=22;b<=30; b++)
    {
           gotoxy(b,4);cout<<z;
           gotoxy(b,8);cout<<z;
           
    }
    for(int a=4;a<=12; a++)
    {
           gotoxy(33,a);cout<<z;
           gotoxy(36,a);cout<<z;
    }
    for(int d=36;d<=43; d++)
    {
      gotoxy(d,4);cout<<z;
      gotoxy(d,8);cout<<z;
    }
    getch();
}
void gotoxy(int x, int y)
{
     COORD c;
     c.X = x - 1;
     c.Y = y - 1;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
