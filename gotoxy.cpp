#include<iostream>
#include<conio.h>
#include<windows.h>
void gotoxy(int, int);
using namespace std;
int main()
{
    int r;
    char c = 219;
    for(r = 8; r<=18; r++)
    {
          gotoxy(60,r); cout<<c;
          gotoxy(48,r); cout<<c;
          gotoxy(35,r); cout<<c;
          gotoxy(20,r); cout<<c;
    }
    for(int C =20; C<=48; C++)
    {
            gotoxy(C,19);cout<<c;
    }
    for(int C =10; C<=19; C++)
    {
            gotoxy(C,8);cout<<c;
            gotoxy(C,12);cout<<c;
    }
    for(int r =9; r<=12; r++)
    {
            gotoxy(10,r);cout<<c;
            
    }
            gotoxy(35,2); cout<<c;
    
    for(int C =30; C<=40; C++)
    {
            gotoxy(C,6);cout<<c;
            
    }
    for(int r =4; r<=6; r++)
    {
            gotoxy(30,r);cout<<c;
            gotoxy(35,r);cout<<c;
            gotoxy(40,r);cout<<c;
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
