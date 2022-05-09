#include<iostream>
#include<conio.h>
using namespace std;
int main()
{char no1[10][10] = {"  One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine"};
char      no2[10][10] = {"Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety","Hundred",};
char      no3[10][10] = {"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen",};
      int n, d, r;
      cout<<"Enter any number: ";
      cin>>n;
      switch(n)
      {
      case 11:cout<<(no3[0]);break;
      case 12:cout<< (no3[1]);break;
      case 13:cout<< (no3[2]);break;
      case 14:cout<< (no3[3]);break;
      case 15:cout<< (no3[4]);break;
      case 16:cout<< (no3[5]);break;
      case 17:cout<< (no3[6]);break;
      case 18:cout<< (no3[7]);break;
      case 9:cout<< (no3[8]);break;   
      }
   {
    d = n/10; r = n%10;        
   switch(d)
   {
            case 1: cout<< (no2[0]);break;
            case 2: cout<< (no2[1]);break;
            case 3: cout<< (no2[2]);break;
            case 4: cout<< (no2[3]);break;
            case 5: cout<< (no2[4]);break;
            case 6: cout<< (no2[5]);break;
            case 7: cout<< (no2[6]);break;
            case 8: cout<< (no2[7]);break;
            case 9: cout<< (no2[8]);break;
            case 10: cout<< (no2[9]);break;
   }
   switch(r)
   {
            case 1: cout<< (no1[0]);break;
            case 2: cout<< (no1[1]);break;
            case 3: cout<< (no1[2]);break;
            case 4: cout<< (no1[3]);break;
            case 5: cout<< (no1[4]);break;
            case 6: cout<< (no1[5]);break;
            case 7: cout<< (no1[6]);break;
            case 8: cout<< (no1[7]);break;
            case 9: cout<< (no1[8]);break;
            
   }
   }
   getch();
}
