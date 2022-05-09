#include<conio.h>
#include<iostream>

using namespace std;

main()
{
      struct data
      {
       char name;
       char section;
       int roll;
       float GPA;
       };
             data s1,s2;
      
              cout<<"enter the name of the student"<<endl;
              cin>>s1.name;
              
              cout<<"Enter the section"<<endl;
              cin>>s1.section;
              
              cout<<"Enter the roll#"<<endl;
              cin>>s1.roll;
              
              cout<<"Enter the GPA"<<endl;
              cin>>s1.GPA;
              
              
              cout<<"record of the second boy"<<endl;
              
              cout<<"enter the name of the student"<<endl;
              cin>>s2.name;
              
              cout<<"Enter the section"<<endl;
              cin>>s2.section;
              
              cout<<"Enter the roll#"<<endl;
              cin>>s2.roll;
              
              cout<<"Enter the GPA"<<endl;
              cin>>s2.GPA;
      
      
getch();
}

