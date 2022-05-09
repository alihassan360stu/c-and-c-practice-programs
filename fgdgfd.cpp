#include<iostream>
#include<conio.h>
#define clrscr() system("cls");
#define pi = 3.14;
using namespace std;
int main()
{
    float volume, circle, sphere, c_radius, cl_radius, s_radius, height, cylinder,;
    cout<<"\t\tAREA OF A CIRCLE, VOLUME OF SPHERE, VOLUME OF CYLINDER: ";
    cout<<"\nENTER RADIUS OF THE CIRCLE :\n\t R =  ";
    cin>>c_radius;
    circle = 3.14*(c_radius*c_radius);
    cout<<"\n\t AREA  = "<<circle<<endl;
    cout<<"\nENTER RADIUS OF SPHERE :\n\t R = ";
    cin>>s_radius;
    sphere = 3.14*(s_radius*s_radius*s_radius)*4/3;
    cout<<"\n\tVOLUME = "<<sphere<<endl;
    cout<<"\nENTER RADIUS AND HEIGHT OF CYLINDER:\n\t R =  ";
    cin>>cl_radius;
    cout<<"\t H =  ";
    cin>>height;
    cylinder = 3.14*(cl_radius*cl_radius)*height;
    cout<<"\n\tVOLUME = "<<cylinder<<endl;
    cout<<"END OF PROGRAM: THANKS BYE!";
    getch();
}
