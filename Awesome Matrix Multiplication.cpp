#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[3][3], arr2[3][3], arr3[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    cout<<"\t\tTHIS PROGRAM MULTIPLIES TWO GIVEN MATRICES: \n";
    cout<<"\nENTER FIRST MATRIX: \n\n";
    for(int row = 0; row < 3; row ++)
    {
            for(int col = 0; col < 3; col ++)
            {
                    arr[row][col] = getche()-48;
                    cout<<"\t";
                    
            }
            cout<<endl;
    }
    cout<<"\n\nENTER SECOND MATRIX: \n\n";
    for(int row = 0; row<3; row++)
    {
            for(int col=0; col<3; col++)
            {
                    arr2[row][col] = getche()-48;
                    cout<<"\t";
            }
            cout<<endl;
            
    }
    // Multiplying the two matrices here.
    for(int row = 0; row< 3; row++)
    {
            for(int col = 0; col < 3;  col++)
            {
                    for(int c = 0; c<3; c++ )
                    {
                    arr3[row][col]  =arr3[row][col] + arr[row][c] * arr2[c][col];
                    }
            }
    }
    cout<<"\nMULTIPLIED MATRIX IS: \n\n";
    for(int row = 0; row < 3; row++)
    {
            for(int col = 0; col < 3;  col++)
            {
            cout<<arr3[row][col]<<"\t";
            }
            cout<<endl;
    
            }
    cout<<"\n   THANKS BYE!";
    getch();
}
