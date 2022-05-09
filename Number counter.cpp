#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int digit[10], one=0, two=0, three=0, four=0, five=0;
    cout<<"ENTER NUMBERS FROM 1 TO 5: \n";
     for(int a = 0; a<10; a++)
     {        
            digit[a] = getche()- 48;
            cout<<"\t";    
            if(a%5==0){cout<<endl;}       
     }
 
    for(int a=0; a<10; a++)
    {
    if(digit[a] == 1){one++;}
    if(digit[a] == 2){two++;}
    if(digit[a] == 3){three++;}
    if(digit[a] == 4){four++;}
    if(digit[a] == 5){five++;}
}
    cout<<"\n\n1s ARE  = "<<one<<endl;
    cout<<"2s ARE  = "<<two<<endl;
    cout<<"3s ARE  = "<<three<<endl;
    cout<<"4s ARE  = "<<four<<endl;
    cout<<"5s ARE  = "<<five<<endl;
    cout<<"\n\tTHANKS BYE! ";
    
    getch();
}
