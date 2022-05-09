/*
Auther : Pr!nce Zuhk0
Description : Binary Search more advance type of search algorithm but work for sorted arrays
*/

#include<conio.h>
#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int binarySearch(const int[], int, int, int, int);
void printHeader( int );
void printRow( const int [], int, int, int, int);

int main()
{
    const int arraySize = 20;
    int a[ arraySize ], key, index;
    
    for( int i = 0; i < arraySize ; i ++)
       a[ i ] = 2*i;
    
    cout << "Enter a number between 0 and 28 : " ;
    cin >> key;
    
    printHeader( arraySize);
    index = binarySearch(a, key, 0 , arraySize-1, arraySize);
    
    if( index != -1)
        cout << '\n' << key << " found at index " << index << endl;
    else
        cout << '\n' << "not found" << endl;
    getch();
}

int binarySearch(const int b[], int searchKey, int low, int high, int size)
{
    int middle;
    while ( low <= high)
    {
        middle = (low + high)/2;
        printRow(b, low, middle, high, size);
        
        if( searchKey == b[ middle ] )
           return middle;
        else if( searchKey < b[ middle ])
           high = middle -1;
        else
           low = middle + 1;
    }
    return -1;
}

void printHeader( int size)
{
     int i ;
     
     cout << "\nSubscripts:\n";
     
     for(i = 0; i < size; i++)
         cout << setw(3) << i << ' ';
     
     cout << '\n';
     
     for( i = 1; i < 4 * size; i++)
         cout << '-';
     
     cout << endl;
}

void printRow( const int b[], int low, int middle, int high, int size)
{
     for( int i =0; i < size; i++)
         if( i < low || i > high)
            cout << "    ";
         else if( i == middle )
            cout << setw(3) << b[i] << '*';
         else
            cout << setw(3) << b[i] << ' ';
     cout << endl;
}
