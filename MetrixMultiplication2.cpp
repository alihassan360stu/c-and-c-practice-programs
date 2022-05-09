#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int r1, r2, c1, c2, inputElement, resultingElement;
      cout<<"Please enter number of Rows in Metrix 1 : ";cin>>r1;
      cout<<"Please enter number of Cols in Metrix 1 : ";cin>>c1;
      cout<<"Please enter number of Rows in Metrix 2: ";cin>>r2;
      cout<<"Please enter number of Cols in Metrix 2 : ";cin>>c2;
      if(c1==r2)
      {
          int m1[r1][c1], m2[r2][c2], mm[r1][c2];
          cout<<"\n\nMultiplication possible...";
          cout<<"\n\nEnter metrix 1...\n\n";
          for(int i = 0; i<r1; i++)
          {
                  for(int j=0; j<c1; j++)
                  {
                          cout<<"input element Matrix1("<<i<<","<<j<<") :";
                          cin>>m1[i][j];
                  }
          }
          cout<<"\n\nEnter metrix2...\n\n";
          for(int i = 0; i<r2; i++)
          {
                  for(int j=0; j<c2; j++)
                  {
                          cout<<"input element Matrix2("<<i<<","<<j<<") :";
                          cin>>m2[i][j];
                  }
          }
          
          cout<<"\n\nResulting Metrix is . : : .\n\n";
          for(int i = 0; i < r1; i++)
          {
                  for(int j = 0; j < c2; j++)
                  {
                          resultingElement = 0;
                          for (int k = 0; k < c1; k++)
                          {
                              resultingElement += (m1[i][k]* m2[k][j]);
                          }
                          mm[i][j] = resultingElement;
                          cout<<resultingElement<<"\t";
                  }
                  cout<<endl<<endl<<endl;
                  }
      }
      else
      {
          cout<<"\n\nMultiplication Not possible...";
      }
      getch();
}
