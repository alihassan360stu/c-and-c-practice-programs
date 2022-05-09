#include<iostream>
using namespace std;



class ali
{
private :
string phone;
char name[20];
int age;
float height;
float weight ;
char color[20]; 

 public:
 	
 void detail (void);
 void eat(void);
 void write (void);
 void sleep (void);
 void typing (void);
 void walking (void);
 
 	
};
void ali :: detail (void)
{
	cout<<"\n \t  Detail \n\n\n";
	cout<<"\t Enter name : ";
	cin>>name;
	cout<<"\n\n";
	cout<<"\t Enter phone number : ";
	cin>>phone;
	cout<<"\n\n";
	cout<<"\t Enter age : ";
	cin>>age;
	cout<<"\n\n";
	cout <<"\t Enter height : ";
	cin>>height;
	cout<<"\n\n";
	cout<<"\t Enter weight : ";
	cin>>weight;
	cout<<"\n\n";
	cout<<"\t Enter hair colour : ";
	cin>>color;
	cout<<"\n\n";
	cout<<"\n\n\t  Press enter to see detail ";
	cin.get();
	cin.get();
	system("cls");
	to:
	cout<<"\n\n \t Display all record \n\n\n";
	cout<<"\t name  : "<<name;
	cout<<"\n\n";
	cout<<"\t Phone number  : "<<phone;
	cout<<"\n\n";
	cout<<"\t Age  : "<<age;
	cout<<"\n\n";
	cout<<"\t Height  : "<<height;
	cout<<"\n\n";
	cout<<"\t Weight  : "<<weight;
	cout<<"\n\n";
	cout<<"\t Hair colour  : "<<color;
	cout<<"\n\n\n\n";
	cout<<"\t  Press enter to next ";

	cin.get();
	system("cls");
	eat();
	
}
void ali :: eat (void)
{
	cout<<"\n\n \t Ali Eating  \n\n\n";
	cout<<"\t Pototato \n\n";
	cout<<"\t Tomatto   \n\n";
	cout<<"\t Onion  \n\n";
	cout<<"\t Finger   \n\n";
	cout<<"\t Mango   \n\n";
	cout<<"\t Apple   \n\n";
	cout<<"\t Grapes   \n\n";
	cout<<"\t Annar   \n\n";
	cout<<"\t Water Milk   \n\n";
	cout<<"\t cow Meat   \n\n";
	cout<<"\t Goat meat   \n\n";
	cout<<"\t Sheap meat  \n\n";
	cout<<"\t Fish   \n\n";
	cout<<"\t Hen   \n\n\n\n";
	cout<<"\t Press enter to next : ";

	cin.get();
	system("cls");
	write();
}

void ali :: write(void)
{
	cout<<"\n\n\t ali writting  \n\n";
	cout<<"\t Poatry \n\n";
	cout<<"\t Application  \n\n";
	cout<<"\t Letter    \n\n";
	cout<<"\n\n\n\n";
	cout<<"\n\n\t  Press enter to next ";
	cin.get();
	system("cls");
	sleep();
}
void ali :: sleep(void)
{
	cout<<"\t Ali sleep time \n\n\n";
	
		cout<<"\t ali sleep 9 pm to 6 am \n\n";
		cout<<"\t ali sleep 3 pm  to 6.30 pm \n\n\n\n";
		cout<<"\n\n\t  Press enter to next ";
	    cin.get();
	    system("cls");
	    typing();
	
}
void ali :: typing(void)
{
	cout<<"\t Ali typing \n\n\n";
	cout<<"\t ali typing in ms word\n\n";
	cout<<"\t ali typing in typing master \n\n";
	cout<<"\t ali typing in dew c++ \n\n";
	cout<<"\t ali typing in pc games \n\n";
	cout<<"\t ali typing in  mobile keyboard \n\n";
	cout<<"\t ali typing in watsapp massenger \n\n";
	cout<<"\n\n\t  Press enter to next ";
	    cin.get();
	    system("cls");
	    walking();
	    
	
}

void ali :: walking(void)
{
	cout<<"\t a\Ali walking in dailly \n\n\n\n";
	cout<<"\t ali walk in daily passkaly to gulshan hool sell \n\n";
	cout<<"\t ali walk in morning 5 am to 6 am \n\n";
	cout<<"\n\n\t  Press enter to next";
		cin.get();
	    system("cls");
	   
}
int main()
{
	ali hassan;
	hassan.detail();
}
