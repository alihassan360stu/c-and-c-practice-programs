#include<iostream>
#include<conio.h>
using namespace std;
//*********************//

//*********************************************//
void display (void);
void homeMenu (void);
void serves(int);
void seat_list(void);
void vehicle_list();
void invo(void);

//**********************************************//


//********************************//
string name,passwords,cnic,customerName,date,contect;        //  string vareable //
//*******************************//



//**********************//
int homed,our_serves,vehicle,seat,cash , back;             //  intiger vareable//
//********************//



//**********************************************//
// DISPLAY    FUNCTION  DIFINATION  //
//*********************************************//

void display (void)  

{ 
	label:
	cout<<"\t\t\t *********************************\n";
cout<<"\t\t\t WELCOME TO TRANSPOTTATION SYSTEM\n";
cout<<"\t\t\t *********************************\n\n\n\n\n";
cout<<"\t\t\t  SIGN UP !\n\n\n\n";
cout<<"\t\t\t ENTER USER NAME  ";
string user_name,password;
cin>>user_name;


if(user_name=="ceer")  // if condition //
{
	cout<<" \n\n \t\t\t Enter password   ";
	cin>>password;
}


else    // else parts // 
{
	cout<<"\t\t\t Your user name is incorrect  \n";
	cout<<"\t\t\t Please try again ";
	cin.get();
	cin.get();
	system("cls");
	
	goto label;   // goto   statment //
}


if(password=="ceer123")  // if condition //
 
{
system("cls");	
cout<<"\n\n \t\t\t ......Login successfully..... ";
cin.get();
cin.get();
system("cls");	
}

else  //   else  parts   // 
{    
     system("cls");
	cout<<"\t\t\t Your  PASSWORD  is incorrect  \n\n ";
	cout<<"\t\t\t Please try again ";
	cin.get();
	cin.get();
	system("cls");
	goto label;
}
}  // function brecket //

void seat_list()
{
     list:
     	
     	
     	if(vehicle==1)
     	
     	{
     	cout<<"\t\t Your selected Vehicle Sky Coach  \n";	
	    }
	    
	    
	    else if(vehicle==2)
	    {
	    cout<<"\t\t Your selected Vehicle  skyway coach  \n";	
		}
		
		
		else if(vehicle==3)
	    {
	    cout<<"\t\t Your selected Vehicle Madina coach  \n"	;
		}
		
		
		else if(vehicle==4)
	    {
	    	cout<<"\t\t Your selected Vehicle  hiace coach  \n";
		}
		
		
		else if(vehicle==5)
	    {
	    	cout<<"\t\t Your selected Vehicle motor car  \n";
		}
		
	cout<<"\t\t _______________________________  \n\n\n";
	cout<<"\t\t ====================\n";
	cout<<"\t\t Seat Selection\n";
	cout<<"\t\t ==================\n\n\n";
	
		cout<<"\t\t Press 1 for   Execution Class = 1000\n\n";
		cout<<"\t\t Press 2 for   Business Class = 600\n\n";
		cout<<"\t\t Press 3 for   Economy Class = 400\n\n";
		
		cout<<"\t\tSelect Your Seat    :  ";
		cin>>seat;
		cin.get();
		system("cls");
		
		switch(seat)
		{
			
		case 1:
		{ 
			cout<<"\t\t Please Give Me 1000 Cash for Execution Class  ";
			cin>>cash;
		if (cash>1000)
		{
			back=cash-1000;
            cout<<"\n\n";
		   	cout<<"\t\t Gave your money  "<<back;
	     	cin.get();
	     	cin.get();
	     	system("cls");
	     	invo();  // function  calling //
			break;
		}
		
		else if(cash==1000)	
		{
		cin.get();
	   	system("cls");
	   	invo(); 
	   	break;
		}
		
	    
	    else 
	    {
	    	cout<<" \n\n \t\t  This is less then 1000  \n\n";
			cout<<" \t\t please try again   ";	
			cin.get();
			cin.get();
			system("cls");
			goto list;
			break;
		}

		}
		case 2:
			
		{
			cout<<"\t\tPlease Give me 600 Cash for Business Class  :  ";
		    cin>>cash;
		    if (cash>600)
		    {
		   	back=cash-600;
		   	cout<<"\n\n";
		   	cout<<"\t\t Gave your money  "<<back;
	     	cin.get();
	     	cin.get();
	        system("cls");
	     	invo();  // function  calling //
	     	break;
			}
			
		else if(cash==600)	
		{
	    cin.get();
	   	system("cls");
		  invo(); 	
	   	break;
		}
			
			else
			{
			cout<<" \n\n \t\t  This is less then 600  \n\n";
			cout<<" \t\t please try again   ";	
			cin.get();
			system("cls");
			goto list;
			break;
				
			}
			
			
		}
		case 3 :
		{
			cout<<"\t\tPlease Give me 400 Cash for Business Class  :  ";
		    cin>>cash;
		    if (cash>400)
		    {
		   	back=cash-400;
		   	cout<<"\n\n";
		   	cout<<"\t\t Gave your money  "<<back;
	     	cin.get();
	     	cin.get();
	     	system("cls");
	     	
	     	invo();  // function  calling //
	     	
	     	break;
			}
			
			else if(cash==400)	
		{
	   	cin.get();
	   	system("cls");
	   	invo(); 
	   	break;
		}
			
			else
			{
			cout<<" \n\n \t\t  This is less then 400  \n\n";
			cout<<" \t\t please try again   ";	
			cin.get();
			cin.get();
			system("cls");
			goto list;
			break;
			return;	
		    }
	}
		
		
		}//   switch  brecket 
	
}    //  vehicle list function brecket 

void vehicle_list()
{if (our_serves==1)
	{
	cout<<"\t\t You are going Hangu  to   ___    peshawer  \n\n";	
	}
	else if(our_serves==2)
	{
	cout<<"\t\t  You are going Hangu  to   ___    kohat  \n\n";	
	}
	else if(our_serves==3)
	{
	cout<<"\t\t You are going Hangu  to   ___    Swat  \n\n";	
	}
	else if (our_serves==4)
	{
	cout<<"\t\t You are going Hangu  to   ___    Islamabad  \n\n";	
	}
	else if(our_serves==5)
	{
	cout<<"\t\t  You are going Hangu  to   ___    Mardan  \n\n";	
	}
	else if (our_serves==6)
	{
	cout<<"\t\t  You are going Hangu  to  ___    Sawabi  \n\n";	
	}
	else if (our_serves==7)
	{
	cout<<"\t\t  You are going Hangu  to  ___    Karachi  \n\n";	
	}
	else if (our_serves==8)
	{
	cout<<"\t\t  You are going Hangu  to   ___    Malakund  \n\n";	
	}
	else 
	{
	cout<<"\t\t You are going Hangu  to   ___    Chitral  \n\n";	
	}
	
	cout<<"===========================================================================\n\n";
		cout<<"\t\t\tVehicle List\n\n";
		cout<<"===========================================================================\n\n";
		
		cout<<"\t\t01.\tSky Coach\n";
		cout<<"\t\t02.\tSkyway Coach\n";
		cout<<"\t\t03.\tMadina Coach\n";
		cout<<"\t\t04.\tHiace Coach\n";
		cout<<"\t\t05.\tMotor Car\n";
		cout<<"\t\t06.\tExit\n";
		
		cout<<"\t\tEnter Your Option  :  ";
		cin>>vehicle;
		cin.get();
		system("cls");
		switch(vehicle)
		{
		case 1:
		{ 
		seat_list();
		return;
		}
		
		case 2:
		{ 
		seat_list();
		return;
		}
		
		case 3:
		{ 
		seat_list();
		return;
		}
		
		case 4:
		{ 
		seat_list();
		return;
		}
		
		case 5:
		{ 
		seat_list();
		return;
		}
		
       case 6:
		{ 
		homeMenu ();
		return;
		}
		
		}
		
}



//**********************************************//
// SERVES   FUNCTION  DIFINATION  //
//*********************************************//


void serves(int serve)
{

		cout<<"\t\t   O u r  S e r v i c e s \n";
		cout<<"\t\t  ========================\n\n";
		cout<<"\t\t01.\tHangu To Peshawar"<<endl<<endl;
		cout<<"\t\t02.\tHangu To Kohat\n\n";
		cout<<"\t\t03.\tHangu To Swat\n\n";
		cout<<"\t\t04.\tHangu To Islamabad\n\n";
		cout<<"\t\t05.\tHangu To Mardan\n\n";
		cout<<"\t\t06.\tHangu To Swabi\n\n";
		cout<<"\t\t07.\tHangu To Karachi\n\n";
		cout<<"\t\t08.\tHangu To Malakand\n\n";
		cout<<"\t\t09.\tHangu To Chitral\n\n";
		cout<<"\t\t10.\tExit\n\n";
		
		cout<<"\t\tEnter Location Option Here(01-10) : ";
		cin>>our_serves;
		cin.get();
		system("cls");
		switch(our_serves)
		{
//*****************************************************
		case 1:
		{	
		    vehicle_list();
		    break;	 	
		}
//*****************************************************
		case 2:
		{
		vehicle_list();	
		break;
	    }
//*****************************************************
	    case 3:
	   	{
	   		vehicle_list();
	   		return;		
		}
//*****************************************************
		 case 4:
	   	{
	   		vehicle_list();
	   		return;		
		}
//******************************************************
		 case 5:
	   	{
	   		vehicle_list();
	   		return;		
		}
//*****************************************************
		 case 6:
	   	{
	   		vehicle_list();
	   		return;		
		}
//*****************************************************
		 case 7:
	   	{
	   		vehicle_list();
	   		return;		
		}
//******************************************************		
		 case 8:
	   	{
	   		vehicle_list();
	   		return;		
		}
//******************************************************		
		 case 9:
	   	{
	   		vehicle_list();
	   		return;		
		}
//******************************************************		
		 case 10:
	   	{
	   		 homeMenu ();
		   	return;
		}
//*********************************************************
		
        }  //  switch  brecket //
}

void homeMenu (void)
{
	
	int homeMenu;
	cout<<"\t\t***************************************"<<endl;
	cout<<"\t\tWelcome To Transport Managnment System"<<endl;
	cout<<"\t\t***************************************"<<endl;
	cout<<endl;
	
	cout<<"\t\t>Home\t\t>Contact\t\t>About-us\n\n";
	
	cout<<"\t\t Press 1  home  \n\n";
	cout<<"\t\t Press 2  Contact  \n\n";
	cout<<"\t\t Press 3  About_us  \n\n";
	cout<<"\t\t Prees 4  to exit \n\n";
	cout<<"\t\t Enter option here  : ";
	cin>>homed;
	cin.get();
	
	system("cls");
	
	switch(homed)   //  using switch  statment //
	
	{
	case 1:
	{
		serves (homeMenu);
		break;
	}
	
	case 2:
	{
	    break;
	}
	
	case 3:
	{
		break;
	}
	case 4:
		{
		cout<<"\t\t *********************************\n";
	   	cout<<"\t\t Thanks  you for using our serves \n";
	   	cout<<"\t\t *********************************\n";
	   	break;
		}
	
	}  // switch   brecket  // 
	
	
}  // home function brecket //


void invo(void)
{
		cout<<"\t\t************************************\n";
		cout<<"\t\t                INVOISE               \n";
		cout<<"\t\t************************************\n\n\n";
		cout<<"\t\t Plesae enter  customer  Name   : ";
	cin>>customerName;
	cout<<"\n\n";
	cout<<"\t\t Enter cnic  : ";
	cin>>cnic;
	cout<<"\n\n";
	cout<<"\t\t Please enter contect number  : ";
	cin>>contect;
	cout<<"\n\n";
	cout<<"\t\t please Enter date  :  ";
	cin>>date;
	cin.get();
	system("cls");
	cout<<"\t\t*********************\n";
	cout<<"\t\t    INVOISE  DETAILS \n";
	cout<<"\t\t*********************\n\n\n";
	cout<<"\t\t  Customer  Name        ___    "<<customerName;
	cout<<"\n\n";
	
//**********************************//
// Nested  if else use our serves  // 
//********************************//
	
	
	if (our_serves==1)
	{
	cout<<"\t\t  Distance Hangu  to \t___> peshawer  \n\n";
	}
	else if(our_serves==2)
	{
	cout<<"\t\t  Distance Hangu  to \t___> kohat  \n\n";
	}
	else if(our_serves==3)
	{
	cout<<"\t\t  Distance Hangu  to \t___>  Swat  \n\n";	
	}
	else if (our_serves==4)
	{
	cout<<"\t\t  Distance Hangu  to \t___>  Islamabad  \n\n";
	} 
	else if(our_serves==5)
	{
	cout<<"\t\t  Distance Hangu  to \t___> Mardan  \n\n";	
	}
	else if (our_serves==6)
	{
	cout<<"\t\t  Distance Hangu  to \t___> Sawabi  \n\n";	
	}
	else if (our_serves==7)
	{
	cout<<"\t\t  Distance Hangu  to \t___> Karachi  \n\n";
    }
	else if (our_serves==8)
	{
	cout<<"\t\t  Distance Hangu  to \t___> Malakund  \n\n";	
	}
	else 
	{
	cout<<"\t\t  Distance Hangu  to \t___> Chitral  \n\n";
	}
	
	
	//**********************************//
	 //   if else use for  vehicle list // 
	//*********************************//
	
	
	if (vehicle==1)
	{
	
	cout<<"\t\t  Vehicle \t\t___> Sky Coach  \n\n";
    }
	else if(vehicle==2)
	{
	
		cout<<"\t\t  Vehicle \t\t___> skyway coach  \n\n";
   } 
	else if(vehicle==3)
	{
	
		cout<<"\t\t  Vehicle \t\t___> madina coach  \n\n";
   }
	else if (vehicle==4)
	{
		cout<<"\t\t  Vehicle \t\t___> hiace coach  \n\n";
	}
	else
	{
	cout<<"\t\t  Vehicle  \t\t___> motor car  \n\n";
	}
	//**************************************//
	// nested if else for  seat list       //
	//************************************//
	
	if(seat==1)   
	{
	  	cout<<"\t\t  Seat Execution Class \t___> R.S  1000 \n\n ";
       		cout<<"\t\t Seat money \t\t___> 1000 \n\n";
			cout<<"\t\t  your Paiment \t\t___> "<<cash;
			cout<<"\n\n";
		    cout<<"\t\t your money here \t___> "<<back;
		    cout<<"\n\n";
	}
	
	else if(seat==2)
	{
		    cout<<"\t\t  Business Class \t ___> R.S  600\n\n";	
      		cout<<"\t\t SSeat Money \t\t ___> 600 \n\n";
			cout<<"\t\t  your Paiment \t\t ___> "<<cash;
			cout<<"\n\n";
		    cout<<"\t\t your money here \t___> "<<back;
	}
	
	else
	{
	    	cout<<"\n\n";
			cout<<"\t\t  Business Class  \t___> R.S  400 \n\n";
			cout<<"\t\t Seat money    \t\t___> 400 \n\n";		
			cout<<"\t\t  your Paiment    \t___> "<<cash;
			cout<<"\n\n";
		    cout<<"\t\t your money here  \t___> "<<back;
		    cout<<"\n\n";
				 
	}
	cout<<"\n\n \t\t  total amount \t\t___> "<<cash;
	cout<<"\n\n"; 
	cout<<"\t\t  CNIC \t\t\t___> "<<cnic;
	cout<<"\n\n";
	cout<<"\t\t  Contect number \t___> "<<contect;
	cout<<"\n\n";
	cout<<"\t\t  Date \t\t\t___> "<<date;
	cout<<"\n\n";
	cout<<"\t\t PRESS ENTER TO BACK MENU   ";
	cin.get();
	system("cls");
	homeMenu();	
	
}

int main()
{
	display();
	homeMenu();
}
