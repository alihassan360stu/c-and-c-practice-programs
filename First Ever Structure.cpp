#include<iostream>
#include<conio.h>
using namespace std;
struct record
    {
      char name[10];
      int s1, s2, s3, s4, t;      
    };
    
int main()
{
    record saif; 
    int total;
    /*cout<<"ENTER CITY NAME ? ";
    cin>>shehr.city;
    cout<<"ENTER POSTAL CODE: ";
    cin>>shehr.pcode;
    cout<<"\nOUTPUT FROM STRUCTURE : "<<endl;
    cout<<"CITY = "<<shehr.city<<endl;    
    cout<<"POSTAL CODE = "<<shehr.pcode<<endl;
     */
     cout<<"\tENTER NAME OF THE STUDENT :";
     cin>>saif.name;
     cout<<"\tSUBJECT 1 = ";
     cin>>saif.s1;
     cout<<"\tSUBJECT 2 = ";
     cin>>saif.s2;
     cout<<"\tSUBJECT 3 = ";
     cin>>saif.s3;
     cout<<"\tSUBJECT 4 = ";
     cin>>saif.s4;
     total = saif.s1 + saif.s2 + saif.s3 + saif.s4;
     cout<<"\n\n\tNAME OF THE STUDENT IS =  "<<saif.name;
     cout<<"\n\tTOTAL MARKS OF THE STUDENT IS =  "<<total;
     
     getch();
}
