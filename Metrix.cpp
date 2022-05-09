#include <iostream>
#include <conio.h>

int[][] getMetrix(int, int);
// getMultiple();
using namespace std;

main()
{
      int r1, r2, c1, c2;
      cout<<"Rows in Metrix 1 : ";cin>>r1;
      cout<<"Cols in Metrix 1 : ";cin>>c1;
      cout<<"Rows in Metrix 2 : ";cin>>r2;
      cout<<"Cols in Metrix 2 : ";cin>>c2;
      int m1[r1][c1];
      int m2[r2][c2];
      int mm[r1][c2];
      if(c1 == r2)
      {
          cout<<"\n\nMultiplication Possible";
          m1 = getMetrix(r1, c1);
      }
      else
      {
          cout<<"\n\nMultiplication not Possible";
      }
      getch();      
}


int[][] getMetrix(int r, int c)
{
    int Metrix[r][c];
    for(int i = 0 ; i < r; i++)
    {
            for(int j = 0; j < c ; j++)
            {
                    cout<<"Please enter ("<<i+1<<","<<j+1<<") entry : ";cin>>Metrix[i][j];
            }
    }
    return Metrix;
} 
