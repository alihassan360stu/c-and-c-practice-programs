/*
Auther : Pr!nce Zuhk0
Description : Linear search algorithem this kind of search is appropriate when the array is not sorted
*/

#include<conio.h>
#include<iostream>

using namespace std;

using std::cout;
using std::endl;
using std::cin;

//argument array, searchKey, return address -1 for not found
int linearSearch(const int [], int, int);

int main()
{
    const long int arraySize = 10000;
    int a[arraySize], searchKey, index;
    
    for(int x=0; x<arraySize; x++)
       a[x] = 3*x;
       
    cout << "Enter integer search key : "<<endl;
    cin >> searchKey;
    index = linearSearch(a, searchKey, arraySize);
    
    if(index != -1)
        cout << "Found value at index " << index << endl;
    else
        cout << "Value not found" <<endl;
    getch();
}

int linearSearch(const int array[], int key, int sizeOfArray)
{
    for(int i=0; i < sizeOfArray; i++)
        if( array[i] == key )
            return i;
            
    return -1;
}
