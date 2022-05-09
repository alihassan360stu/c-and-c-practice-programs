#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    char a = 27, b = 30, c = 31;
   cout<<"THIS PROGRAM USES SETW(n) MANIPULATOR TO CREATE THE FOLLOWING BEAUTIFUL SHAPES:\n";
  cout<<"PLUS\n";
  for(int i=1; i<=10; i++)
  {
  for(int j=1;j<=i;j++)
  {           
  cout<<"+";
  }
  cout<<endl;
  }
  cout<<endl<<endl;
  cout<<"DOTS\n";
  
  for(int s = 10, i=1; i<=10; i++, s--)
  {
          cout<<setw(s);
  for(int  j=1;j<=i;j++)
  {           
  cout<<".";
  }
  cout<<endl;
  }
  cout<<endl;
   cout<<"EXCLAMATION MARKS\n";
  for(int  i=10; i>=1; i--)
  {
  for(int j=1;j<=i;j++)
  {           
  cout<<"!";
  }
  cout<<endl;
  }
  cout<<"BACK ARROWS\n";
  for(int s = 1, i=10; i>=1; i--, s++)
  {
          cout<<setw(s);
  for(int  j=1;j<=i;j++)
  {           
  cout<<a;
  }
  cout<<endl;
  }
  cout<<"\n\n";
  cout<<"UP AND DOWN TRIANGLES\n";
  for(int s=10, i=1; i<=10; i+=2,s--)
  {cout<<setw(s);
  for(int j=1;j<=i;j++)
  {           
  cout<<b;
  }
  cout<<endl;
  }
  
  // Reverse of the first.
  
  for(int s = 6, i=10; i>=1; i-=2, s++)
  {cout<<setw(s);
          cout<<setw(s);
  for(int  j=1;j<i;j++)
  {           
  cout<<c;
  }
  cout<<endl;
  }
  cout<<endl;
  cout<<"RIGHT PROJECTED ARROW\n";
  for(int s=1, i=1; i<=5; i++, s++)
    {
            cout<<setw(s);
            for(int j=1; j<=i; j++)
            {
                    cout<<"*";
            }
            cout<<endl;
    }
     for(int s=4, i=5; i>1; i--, s--)
    {
            cout<<setw(s);
            for(int j=1; j<i; j++)
            {
                    cout<<"*";
            }
            cout<<endl;
    }
    cout<<"UPWARD ARROW\n";
     for (int s = 10 ,i=1; i<=10;i+=2, s--)
        {
             cout<<setw(s);
             for(int j=1; j<=i; j++)
             {
                     cout<<"*";
             }
             cout<<endl;
        }
        for(int s =8, i=1; i<=8; i++ )
        {
                cout<<setw(s);
                for(int j=1; j<=5; j++)
                {
                        cout<<"*";
                }
                cout<<endl;
        }
getch();
}
