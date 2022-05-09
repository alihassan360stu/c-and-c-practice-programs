#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int arr[2][2] = {{3,9},{1,7}};
      int transpose[2][2];
      for(int i =0; i<2; i++)
      {
              for(int g=0; g<2; g++)
              {
                      transpose[i][g] = arr[g][i];
              }
      }
      for(int i =0; i<2; i++)
      {
              for(int g=0; g<2; g++)
              {
                      cout<<arr[i][g]<<"\t";
              }
              cout<<endl;
      }
      cout<<"\n\n";
      for(int i =0; i<2; i++)
      {
              for(int g=0; g<2; g++)
              {
                      cout<<transpose[i][g]<<"\t";
              }
              cout<<endl;
      }
      getch();
}
