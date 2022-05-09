/******************************************************************************
  Name: DOING MATRICES...
  Copyright: Reserved with the Author:
  Author: Saif Ur Rehman  
  Date: 04/04/10 14:10
  Description:  This Program gets input values from the user in 1st and then 2nd 
                array(matrix), Adds the two matrices, shows the transpose of the
                resultant matrix, also multiplies the two matrices...
********************************************************************************/
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], res[3][3]={{0,0,0,},{0,0,0,},{0,0,0,}};
    cout<<"FIRST MATRIX: \n";
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout<<"row = "<<i<<" col = "<<j<<" ";
                    cin>>mat1[i][j];
            }
            cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout<<mat1[i][j];
                    cout<<"\t";
            }
            cout<<endl;
    }
    cout<<"\n\n-------------------\n";
    cout<<"SECOND MATRIX: \n";
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout<<"row = "<<i<<" column = "<<j<<" ";
                    cin>>mat2[i][j];
            }
            cout<<endl;
    }
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout<<mat2[i][j];
                    cout<<"\t";
            }
            cout<<endl;
    }
    cout<<"\n\n------------------\n";
    
    cout<<"SUM OF THE MATRICES IS: \n";
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    mat3[i][j]=mat1[i][j]+mat2[i][j];
                    cout<<mat3[i][j];
                    cout<<"\t";
            }
            cout<<endl;
    }
      cout<<"TRANSPOSE OF MATRIX IS: \n";
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    cout<<mat3[j][i];
                    cout<<"\t";
            }
            cout<<endl;
    }
    cout<<"MULTIPLICATION: \n";
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
                    for(int k=0; k<3; k++)
                    {
                            res[i][j]+= mat1[i][k]* mat2[k][j];
                    }
                    
            }
            
    }
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<3; j++)
            {
            cout<<res[i][j]<<"\t";
            }
            cout<<endl;
            }
            getch();
}
