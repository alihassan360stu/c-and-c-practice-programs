#include <iostream>
#include <conio.h>

using namespace std;

main()
{
      int index, stackValue;
      cout<<"Enter no of entries : ";cin>>index;
      int numbers[index];
      for(int i = 0; i < index ; i++)
      {
              cout<<"\nPlease enter any number : ";cin>>numbers[i];
      }
      for(int i=0; i < index ; i++)
      {
              for(int j = i; j< index; j++)
              {
                      if(numbers[j]>numbers[i])
                      {
                              stackValue = numbers[i];
                              numbers[i] = numbers[j];
                              numbers[j] = stackValue;
                      }
              }        
      }
      cout<<"\n\nSorting ...\n";
      for(int i = 0; i < index ; i++)
      {
              cout<<numbers[i];
              if(i+1!=index)
                            cout<<", ";
      }
      getch();
}
