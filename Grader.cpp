#include <iostream>
#include <conio.h>
#define clrscr() system("cls");

using namespace std;
int main()
{
    float MARKS_OBTAINED, AVERAGE, PERCENTAGE, A,B,C,D,E,F;
    char OPT, c;
saif:    cout<<"\t\tTHIS A DETAILED MARKS CERTIFICATE PROGRAM\n\n";
    cout<<"1. CIRCUIT AND SYSTEMS MARKS = ";
    cin>>A;
    if(A>=100)
           {
                   cout<<"YOU CAN'T ENTER MARKS MORE THAN 100:";
                   
                   cout<<"\nPRESS c TO TRY AGAIN:";
                   cin>>c;
                   if (c=='c')
                   {
                              clrscr();
                              goto saif;
                   }
                   
           }
    cout<<"2. COMPUTER PROGRAMMING MARKS = ";
    cin>>B;
    if(B>=100)
           {
                   cout<<"YOU CAN'T ENTER MARKS MORE THAN 100: TRY AGAIN !";
                   cout<<"PRESS c TO TRY AGAIN:";
                   cin>>c;
                   if (c=='c')
                   {
                              clrscr();
                              goto saif;
                   }
           }
    cout<<"3. ENGINEERING MECHANICS MARKS = ";
    cin>>C;
    if(C>=100)
           {
                  cout<<"YOU CAN'T ENTER MARKS MORE THAN 100: TRY AGAIN !";
                    cout<<"PRESS c TO TRY AGAIN:";
                   cin>>c;
                   if (c=='c')
                   {
                              clrscr();
                              goto saif;
                   }
           }
    cout<<"4. LINEAR ALGEBRA MARKS = ";
    cin>>D;
    if(D>=100)
           {
                  cout<<"YOU CAN'T ENTER MARKS MORE THAN 100: TRY AGAIN !";
                   cout<<"PRESS c TO TRY AGAIN:";
                   cin>>c;
                   if (c=='c')
                   {
                              clrscr();
                              goto saif;
                   }
           }
    cout<<"5. COMMUNICATION AND PRESENTATION SKILLS MARKS = ";
    cin>>E;
    if(E>=100)
           {
                   cout<<"YOU CAN'T ENTER MARKS MORE THAN 100: TRY AGAIN !";
                    cout<<"PRESS c TO TRY AGAIN:";
                   cin>>c;
                   if (c=='c')
                   {
                              clrscr();
                              goto saif;
                   }
           }
    cout<<"6. PAKISTAN STUDIES MARKS = ";
    cin>>F;
           if(F>=100)
           {
                   cout<<"YOU CAN'T ENTER MARKS MORE THAN 100: TRY AGAIN !";
                   cout<<"PRESS c TO TRY AGAIN:";
                   cin>>c;
                   if (c=='c')
                   {
                              clrscr();
                              goto saif;
                   }
           }
           MARKS_OBTAINED = (A+B+C+D+E+F);
           AVERAGE  = (A+B+C+D+E+F)/6;
           PERCENTAGE = (MARKS_OBTAINED*100)/600;
           cout<<"\n\nMARKS OBTAINED =  "<<MARKS_OBTAINED<<endl;
           cout<<"AVERAGE OF YOUR MARKS IS = "<<AVERAGE<<endl;
           cout<<"PERCENTAGE IS = "<<PERCENTAGE<<endl;


    if(PERCENTAGE>=90)
    
    {
          cout<<"\nYOUR GRADE IS = A"<<endl;
          cout<<"comment: EXCELLENT!";
    }
    else if(PERCENTAGE >=80)        
    {
         cout<<"\nYOUR GRADE IS = B"<<endl;
         cout<<"comment: FAIR";
    }
    else if(PERCENTAGE >=60)    
    {
         cout<<"\nYOUR GRADE IS = C"<<endl;
         cout<<"comment: WORK HARD";
    }
    else if(PERCENTAGE >=40)      
    {
         cout<<"\nYOUR GRADE IS = D"<<endl;
         cout<<"comment: HARDLY PASSED";
    }
    else       
    {
         cout<<"\nYOUR GRADE IS = F"<<endl;
         cout<<"comment: YOU ARE FAIL: TRY NEXT YEAR!";
    }       
     cout<<"\n\nDO YOU WANT MORE RESULTS? ";
wrong:     cout<<"\nYES(y) NO (n)";
     cin>>OPT;
	
    if(OPT=='y'||OPT=='Y')
    {
                clrscr();
                goto saif;
    }
    else if(OPT=='n'||OPT=='N')
    {
          cout<<"THANKS BYE !";
    }
    else 
    {
         cout<<"WRONG SELECTION: YOU EITHER HAVE TO SELECT \"Y\" OR \"N\"";
         goto wrong;
    }

    getch();
}

     
 

