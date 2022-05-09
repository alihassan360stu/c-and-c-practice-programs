#include<conio.h>
#include<iostream>

using namespace std;

main()
{
      struct data
{
       char name[20];
       char section[1];
       int roll;
       float GPA;
};
      data student[3];
      
      for(int i=0; i<3; i++)
      {
              cout<<"enter the name of the student"<<endl;
              cin>>student[i].name;
              
              cout<<"Enter the section"<<endl;
              cin>>student[i].section;
              
              cout<<"Enter the roll#"<<endl;
              cin>>student[i].roll;
              
              cout<<"Enter the GPA"<<endl;
              cin>>student[i].GPA;
      }
      
getch();
}


