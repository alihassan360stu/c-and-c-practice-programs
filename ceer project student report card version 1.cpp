#include<iostream>
using namespace std;
//                   globel  vareable                                                     // 
//**********************************************************************************//
int roll,eng,urdu,math,physics,cs,isalam,entryMenuOption;
//***********************************************************************************//


//************************//
string name;
//************************//



//***********************//
double per,average;
//***********************//





//***********************//
//using  display funtion//
//*********************//

void display(void)

//***************************//
//using for loop  for loading//
//**************************//
{
   for(int i=0;i<=100;i++)
{
	cout<<"\n\n\n\n\n\n\t\t\t loading \t\t\t\t\t"<<i;
		
	system("cls");
}
cout<<endl;
	cout<<"\t\t\t Student \n";
	
	cout<<"\t\t\t Report Card \n";
	
	cout<<"\t\t\t Project\n\n";

	cout<<"\t\t   Made by : ALI HASSAN \n";
	
	cout<<"\t\t   Intitude: team CEER\n";
	
	cin.get();
	
	system("cls");
	
}

// using entry menu function //

void entryMenu(int secondOption)
{
	bus:
	hass:
	label:
	entryMenu:
	cout<<endl;
	cout<<"\t\t\t Entry menu\n\n";
	cout<<"\t\t\t 1. Create student card\n\n";
	cout<<"\t\t\t 2. Display all student record\n\n";
	cout<<"\t\t\t 3. Search student record\n\n";
	cout<<"\t\t\t 4. Modify student record\n\n";
	cout<<"\t\t\t 5. Delete student record\n\n";
	cout<<"\t\t\t 6. Back to main menu\n\n";
	cout<<"\t\t\t Enter option (1 to 6)";
	cin>>entryMenuOption;
	system("cls");
	
	//************************//
	// using switch statment //
	//**********************//
	
	switch(entryMenuOption)
	
	{
		case 1:
			{	
				cout<<"\t\t\t Please enter your name  ";
				cin>>name;
				cout<<endl;
				
				cout<<"\t\t\t Enter roll number  ";
				cin>>roll;
				system("cls");
				cout<<"\t\t\tEnter english marks (100)  ";
				cin>>eng;
				cout<<endl;
				
				cout<<"\t\t\tEnter urdu marks (100)  ";
				cin>>urdu;
				cout<<endl;
				
				cout<<"\t\t\tEnter maths marks (100)  ";
				cin>>math;
				cout<<endl;
				
				cout<<"\t\t\tEnter physics marks (100)  ";
				cin>>physics;
				cout<<endl;
				
				cout<<"\t\t\tEnter computer science marks (100)  ";
				cin>>cs;
				cout<<endl;
				
				cout<<"\t\t\tEnter islamyat marks (100)  ";
				cin>>isalam;
				
				cin.get();
				system("cls");
			

				
				cout<<"\n\t\t\t ***************************\n";
				cout<<"\n\t\t\t student Created succesfully .....\n";
				cout<<"\n\t\t\t ****************************\n";
				cin.get();
				system("cls");
				goto entryMenu;
				break;
			}
			case 2:
				
				
			// sorry sir
			
			//   sir hum ne to bohat koshesh ke leken case 2 nahi exit  raha he 
			
			//    sir  hum bohat confuse hee sir kayee barr goto statment use keeya leken nahi horaha
			
			
			
			{
				cin.get();
				system("cls");
		
			cout<<"\t\t*************************\n";
			cout<<"\t\t Display   all   Record \n";
			cout<<"\t\t*************************\n\n\n";
			
			cout<<"\t\t Name  = "<<name;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Roll number = "<<roll;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t English marks  = "<<eng,
			cout<<endl;
			cout<<"\t\t Urdu marks  = "<<urdu;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Maths marks  = "<<math;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Physics marks  = "<<physics;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Computer Science marks  = "<<cs;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Islamyat marks  = "<<isalam;
			cout<<endl;
			cout<<endl;
			per=((eng+urdu+math+physics+cs+isalam)/600.0)*100.0;
			cout<<"\t\t Percentage = "<<per;
			average=(eng+urdu+math+physics+cs+isalam)/6;
			cout<<"\n\n \t\t Average = "<<average;
			goto label;
			break;
			}
			
			//***************************//
			// case 3 for search record //
			//*************************//
			
			case 3:
		{
				system("cls");
			cout<<"\t\t Search student record \n\n";
			cout<<"\t\t Enter roll number  ";
			cin>>entryMenuOption;
			if(roll==entryMenuOption)
			
			{
			cout<<"\t\t Name  = "<<name;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Roll number = "<<roll;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t English marks  = "<<eng,
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Urdu marks  = "<<urdu;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Maths marks  = "<<math;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Physics marks  = "<<physics;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Computer Science marks  = "<<cs;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Islamyat marks  = "<<isalam;
			cout<<endl;
			cout<<endl;
			per=((eng+urdu+math+physics+cs+isalam)/500.0)*100.0;
			cout<<"\t\t Percentage = "<<per;
			average=(eng+urdu+math+physics+cs+isalam)/6;
			cout<<"\n\n \t\t Average = "<<average;
		}
			else
			{
				cout<<" \n\n\n \t\t Please enter corect roll number \n";
			}
			goto bus;
			
		}
	       //case 4 for modufy 
			case 4:
		{
			cout<<"\t\t ***************\n";
	     	cout<<"\t\t Modify record \n";
			cout<<"\t\t *************\n\n\n";
				
			cout<<"Please enter roll number  ";
			cin>>entryMenuOption;
			if(roll==entryMenuOption)
			{
			cout<<"\t\t Name  = "<<name;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t roll number = "<<roll;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t English marks  = "<<eng,
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Urdu marks  = "<<urdu;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Maths marks  = "<<math;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Physics marks  = "<<physics;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Computer Science marks  = "<<cs;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t Islamyat marks  = "<<isalam;
			cout<<endl;
			cout<<endl;
			per=((eng+urdu+math+physics+cs+isalam)/500.0)*100.0;
			cout<<"\t\t Percentage = "<<per;
			average=(eng+urdu+math+physics+cs+isalam)/6;
			cout<<"\n\n \t\t Average = "<<average;
			//**************//
			//record update//
			//************//
			cout<<" \n\n\n \t\t\t Update record\n\n";
			cout<<"\t\t\t Please enter your name  ";
			cin>>name;
			cout<<endl;
				
				
			cout<<"\t\t\t Enter roll number  ";
			cin>>roll;
			system("cls");
			cout<<"\t\t\tEnter english marks (100)  ";
			cin>>eng;
			cout<<endl;
				
			cout<<"\t\t\tEnter urdu marks (100)  ";
			cin>>urdu;
			cout<<endl;
				
			cout<<"\t\t\tEnter maths marks (100)  ";
			cin>>math;
			cout<<endl;
				
			cout<<"\t\t\tEnter physics marks (100)  ";
			cin>>physics;
			cout<<endl;
			
			cout<<"\t\t\tEnter computer science marks (100)  ";
			cin>>cs;
			cout<<endl;
				
			cout<<"\t\t\tEnter islamyat marks (100)  ";
			cin>>isalam;
			cout<<"\t\t\t Record update\n";
			goto hass;
			}	
		}
	}
	
	
	
}	
//**************************//
// using  mame menu function//
//**************************//
void mainmenu(void)
{
mainmenu:	
int mainmenu;

cout<<endl;

cout<<"\t\t\t Main Menu \n\n";

cout<<"\t\t\t 01 Result Menu \n\n";

cout<<"\t\t\t 02 Entry/Edit Menu \n\n";

cout<<"\t\t\t 03 Exit \n\n";

cout<<"\t\t\t Please select your option (1-3) ";

cin>>mainmenu;

system("cls");

//**********************************//
// using switch statment (main menu)//
//*********************************// 
switch(mainmenu)
{
	//case 1
	
	case 1:
		{
			break;
		}
		
	//case 2
		
	case 2:
	{
	        entryMenu(mainmenu);
	        break;
	}
	
	// case 3
	
	case 3:
	{
		  cout<<"\n\n\n\n \t\t ******* thank you for using our servise ******";
		  break;
	}	
}
}
//**************************//
//call the both function    //
//**************************//
int main()
{
	display();
	mainmenu();
}
