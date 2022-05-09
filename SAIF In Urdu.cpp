#include<iostream>
#include<conio.h>
#include<windows.h>
void gotoxy(int, int);
using namespace std;
int main()
{
    int r;
    char c = 219;
    gotoxy(30,10);
    for(int i=30; i<50; i++)
    {
            gotoxy(i,8); cout<<c;
    }
    for(int i=6; i<=7; i++)
    {
            gotoxy(30,i);cout<<c;
            
    }
    for(int a=30; a<=35; a++)
    {
            gotoxy(a,6);cout<<c;
    }
    for(int b = 30; b>=18; b--)
    {
            gotoxy(b,8);cout<<c;
    }
    gotoxy(32,4); cout<<c;
    
    gotoxy(36,10); cout<<c;
    gotoxy(38,10); cout<<c;
    for(int C=6; C<=8; C++)
    {
            gotoxy(18,C);cout<<c;
            gotoxy(17,C);cout<<c;    
    }
    for(int i=6; i<=8; i++)
    {
            gotoxy(35,i); cout<<c;
            gotoxy(40,i); cout<<c;
            gotoxy(45,i); cout<<c;
            gotoxy(50,i); cout<<c;
    }
    getch();
}
void gotoxy(int x, int y)
{
     COORD c ;
     c.X = x - 1; 
     c.Y = y - 1;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
