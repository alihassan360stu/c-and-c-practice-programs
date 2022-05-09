
#include<iostream>
#include<conio.h>
using namespace std;
//*******************************//
void display();
void loading();
void main_menu();
void product_list();
void product_bying();
void about_company();
void rent ();
void account_setting();
void account_sitting_messege();
void update_setting();
//
void rant_avai();
void conformation();
void invoice();
void no_divilary();
void no_divilary1();
void after_div();
//******************************(   mainmenu  function protype  end)

//******************************( checking)
int check1=2,check2=2,check12=3,checkab=1,check3=3,check4=2,check5=1,check6=3;
//******************************( checking)

//******************************( account function)
void email_fun ();
void account ();
void account_izaza();
//******************************( account function)


//******************************(product list function prototype start)
void car_list(void);
void motor_byke(void);
void sport_car(void);

//******************************(product list function prototype start)


//******************************(product list bying  function prototype start)
void car_list1 ();
void motor_byke1();
void sport_car1();
//******************************(product list bying f function prototype end)

string  product_lis,account_IJAZAT,acc_name,acc_last_name,email,new_email,password,new_password,gender,acc_date_birth;
string password_con, sport_by ,motor_by,car_by,full_name ,id_card, date,cash,creat_new_pass,new_conform_password,about_com;
string city_div,address_dil,phone_div;
//******************************(  main menu function start)
int motor_bike,car_lis,sport_ca,car_lis_buing,motor_bike_byi,sport_ca_bying,check=3,selected_option,product_byin,rent_avi;
//******************************(  main function  start)
int main ()
{
loading();
display();
main_menu();
return 0;
}
void main_menu()
{system("color 3");
	label:
	system("cls");
	cout<<"\t\t ********* \n";
    cout<<"\t\t MAIN MENU \n";
	cout<<"\t\t ********* \n\n\n";
	cout<<"\t 1- ABOUT COMPANY \n\n";
	cout<<"\t 2- PRODUCT LIST \n\n";
	cout<<"\t 3- RANT AVAILIBILITY \n\n";
	cout<<"\t 4- PRODUCT BUING \n\n";
	cout<<"\t 5- DIVILIRY \n\n";
	cout<<"\t 6- ACCOUNT SETTING \n\n";
	cout<<"\t 7- INVISE \n\n";
	cout<<"\t 8- EXIT \n\n";
	cout<<"\t PLEASE SELECTED OPTION HERE (1 to 8) ";
	cin>>selected_option;
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 1)
	switch(selected_option)
	{
	
	case 1:
	
	about_company();break;
	
    
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 1 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 2)
    
    case 2:
	
		product_list();break;
	
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 2 end)
		
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 3)
	
       case 3:
	
		rent ();break;
	
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 3 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 4)
	
       case 4:
    	product_bying();break;
    
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 4 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 5)
	
      case 5:
      	{
		
	  conformation();
	  break;
        }
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 5 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 6)	
         case 6:
        {	
	    if(checkab==4)
	    {
		main_menu();
	    }
		else
		{
		
		account_setting();break;
	    }
	    }
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 6 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 7)
	
     case 7:
	invoice();break;
	
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 7 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 8)
	case 8:
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t THANK FOR VISITING \n\n\n\n\n\n\n\n\n\n\n\n\n";
		break;
	}
	//%%%%%%%%%%%%%%%%%%%%%%%%//(condition 8 end)
	
	//%%%%%%%%%%%%%%%%%%%%%%%%//(else part)	
	default:
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n \t\t WRONG OPTION PlEASE TRY AGAIN PRESS [ENTER]";
		getch();
		goto label;
		
	}
	//%%%%%%%%%%%%%%%%%%%%%%%%//(else part close)
   }
	
	
}
//******************************(  main menu function end )

void invoice()
{
system("color 3");	
invis:
if(check5==5)

{
system("cls");
cout<<"\t\t ****** \n";
cout<<"\t\t INVISE \n";
cout<<"\t\t ****** \n\n\n";
cout<<"\t Custamer name    "<<full_name<<"\n\n";
cout<<"\t Id card number   "<<id_card<<"\n\n";
cout<<"\t Phone number     "<<phone_div<<"\n\n";
if(check6==3)
{
cout<<"\t Account email    "<<email<<"\n\n";	
}
if (check6==6)
{
cout<<"\t Account email    "<<new_email<<"\n\n";	
}
cout<<"\t Address          "<<address_dil<<"\n\n";
cout<<"\t Total payment    "<<cash<<"\n\n";
cout<<"\t Current date     "<<date<<"\n\n";
check4=6;
cout<<"\t PRESS [ANY KEY]..";
getch();
main_menu();
}
else
{
		
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\tPLEASE SELECT VEHICLE FOR BYING PRESS [ANY KEY]..";
getch();
main_menu();
}


}//******************************(invise function start )


void conformation()//******************************(  diviliry  function start )
{
div:
system("color 4");
if(check3==5)
{
system("cls");
cout<<"\t\t ********************* \n";
cout<<"\t\t DELIVERY CONFORMATION \n";
cout<<"\t\t ********************* \n\n\n";	
cout<<"\t Please Enter Your City Name ";
cin>>city_div;
cout<<"\n\n";
cout<<"\t Please Enter Your Home Address ";
cin>>address_dil;
cout<<"\n\n";
cout<<"\t Please Enter Your Phone No ";

cin>>phone_div;	
system("cls");
cout<<"\n\n\n\n\n";
cout<<"\t\t ******************** \n";
cout<<"\t\t DELIVERY SUCCESSFULL \n";
cout<<"\t\t ******************** \n\n\n";
cout<<"\t\t Please Conform after two days Press [Any Key]..";
getch();
main_menu();
}

else if(check3==3)
{
system("color 5");
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\tPLEASE SELECT VEHICLE FOR BYING PRESS [ANY KEY]..";
getch();
main_menu();
}

else
{
system("color 6");
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t PLEASE CHECK AFTER TWO DAYS PRESS [ANY KEY]..";
getch();
main_menu();	
}
}//******************************(  diviliry function end )


void account_setting()//******************************(  account sitting function start )
{
if(checkab==3)
{	
system("color 6");
system("cls");	
cout<<"\n\n\n\n\n\n\n\n\n";
cout<<"\t\t ************************************ \n";
cout<<"\t\t ACCOUNT SETTTING HAS ALREADY UPDATED \n";
cout<<"\t\t ************************************ \n\n\n";	
cout<<"\t\t Press[Any Key]..";
checkab=4;
getch();
main_menu();	
}

else if(check2==2)
{
system("color 2");
system("cls");
check2=5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t PLEASE FIRST CREATE ACCOUNT PRESS [ANY KEY ]..";
getch();
main_menu();
}

else
{
account:
system("cls");
cout<<"\t\t********************* \n";
cout<<"\t\tACCOUND SETTING CHANGE \n";
cout<<"\t\t********************* \n\n\n";

cout<<"\t ENTER NEW NAME ";
checkab=3;
cin>>acc_name;
cout<<"\n\n";
cout<<"\t ENTER OLD Email NUMBER ";

cin>>new_email;
if(new_email==email)
{
check6=6;
cout<<"\n\n";
cout<<"\t ENTER OLD PASSWORD ";
cin>>new_password;
}

else
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t PLEASE FIRST CREATE ACCOUNT PRESS [ANY KEY ]..";
getch();
goto account;

}

if(new_password==password)
{
 cout<<"\n\n";
cout<<"\t ENTER NEW NEW PASSWORD ";
cin>>creat_new_pass;
}
else 
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\t\t WRONG EMAIL PRESS [ANY KEY] ";
getch();
goto account;
}

acco:
cout<<"\n\n";
cout<<"\tPLEASE CONFORM PASSWORD ";
cin>>new_conform_password;

if(new_conform_password==creat_new_pass)
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t ***************************\n";
	cout<<"\t\t ACCOUNT UPDATE SUCCESSFULLY \n";
	cout<<"\t\t ***************************\n\n\n\n";
	check2=9;
	cout<<"\t\t Press [Any Key]..";
	getch();
	main_menu();
	
}
else 
{

cout<<"\n\n \t\t WRONG EMAIL PRESS [ANY KEY] ";
getch();
}
} // parts brecket 
}

void product_bying()//******************************( product bying function start )
{
	system("color 6");
	if(check12==3)
	{
	account_izaza();
    }
    
	if(check1==5)
	{
	account ();
	}
	
	if(check1==6)
	{   // if part brecket //
	
	label119:
	system("cls");
	cout<<"\t\t\t ************** \n";
	cout<<"\t\t\t PRODUCT BYIUNG \n";
	cout<<"\t\t\t ************** \n\n\n\n";
	cout<<"\t 1-CARS LIST\n\n";
	cout<<"\t 2-MOTOR BIKE\n\n";
	cout<<"\t 3-SPORTS CAR OR BIKE \n\n";
	cout<<"\t 4-BACK TO MAIN MENU \n\n";
	cout<<"\t SELECT OPTION [1 to 4]  ";
	check2=6;
	cin>>product_byin;
	switch(product_byin)
	
	{
	case 1:
    	car_list1 ();	break;
   	case 2:
    motor_byke1();	 break;
   

   	case 3:
    sport_car1();break;

	
	
    case 4:
    main_menu();break;
    
	
	default:
	{
	system("CLS");
	cout<<"\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto label119;
	break;
	}
    
}
}  // if part brecket // 
}//******************************( product bying function End )



void account () // ***************************** account function difinition start //
{

system("color 4");
system("cls");
cout<<"\t\t ******** \n";
cout<<"\t\t SIGN IN \n";
cout<<"\t\t ******* \n\n\n";
cout<<"\t ENTER NAME ";
cin>>acc_name;
cout<<"\n\n";
cout<<"\t ENTER LAST NAME ";
cin>>acc_last_name;
cout<<"\n\n";
cout<<"\t ENTER DATE OF BIRTH ";
cin>>acc_date_birth;
label:
cout<<"\n\n";

cout<<"\t ENTER GENTED ";
check1=6;
cin>>gender;

if(gender=="female" or gender=="FEMALE")
{

system("color 2");
cout<<"\n\n";
cout<<"\t ENTER EMAIL ";
cin>>email;
cout<<"\n\n";
cout<<"\t ENTER PASSWORD ";
cin>>password;
cout<<"\n\n";
label2:
cout<<"\t CONFORM PASSWORD ";
cin>>password_con;
cout<<"\n\n";
if(password_con==password)
{
system("cls");
cout<<"\n\n\n\n";
cout<<"\t ***************** \n";
cout<<"\t LOGIN SUCCESFULLY \n";
cout<<"\t ***************** \n\n\n";
cout<<"\t PRESS ANY KET TO CONTENUE.. ";
getch();
}
else
{
cout<<"\t WRONG OPTION PLEASE TRY AGIAN \n\n";
goto label2;
}
}
else if(gender=="male" or gender== "MALE")
{

system("color 2");
cout<<"\n\n";
cout<<"\t ENTER EMAIL ";
cin>>email;
cout<<"\n\n";
cout<<"\t ENTER PASSWORD ";
cin>>password;
cout<<"\n\n";
label244:
cout<<"\t CONFORM PASSWORD ";
cin>>password_con;
cout<<"\n\n";
if(password_con==password)
{
system("cls");
cout<<"\n\n\n\n";
cout<<"\t ***************** \n";
cout<<"\t LOGIN SUCCESFULLY \n";
cout<<"\t ***************** \n\n\n";
cout<<"\t PRESS ANY KET TO CONTENUE.. ";
getch();
}
else
{
cout<<"\t WRONG OPTION PLEASE TRY AGIAN \n\n";
goto label244;
}	
}
else if(gender=="SHEMALE" or gender== "shemale")
{

system("color 2");
cout<<"\n\n";
cout<<"\t ENTER EMAIL ";
cin>>email;
cout<<"\n\n";
cout<<"\t ENTER PASSWORD ";
cin>>password;
cout<<"\n\n";
label245:
cout<<"\t CONFORM PASSWORD ";
cin>>password_con;
cout<<"\n\n";
if(password_con==password)
{
system("cls");
cout<<"\n\n\n\n";
cout<<"\t ***************** \n";
cout<<"\t LOGIN SUCCESFULLY \n";
cout<<"\t ***************** \n\n\n";
cout<<"\t PRESS ANY KET TO CONTENUE.. ";
getch();
}
else
{
cout<<"\t WRONG OPTION PLEASE TRY AGIAN \n\n";
goto label245;
}

}
else 
{
cout<<"\t WRONG OPTION PLEASE TRY AGAIN ";
goto label;	
}// else part //
} // ***************************** account  function difinition //


void account_izaza()//******************************( account_izazan STRAT  )
{
ijaza:
system("color 7");
system("cls");
cout<<"\t\t ******** \n";
cout<<"\t\t SIGN IN \n";
cout<<"\t\t ******* \n\n\n";
cout<<"\t DO YOU WANT CREATE ACCOUNT (Y / N)..";
cin>>account_IJAZAT;
if(account_IJAZAT=="y" or account_IJAZAT =="Y")
{
system("cls");
check1=5;
check12=5;
}

else if(account_IJAZAT=="N" or account_IJAZAT=="n")
{
system("cls");
main_menu();
}

else
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
getch();
goto ijaza;
}

}//******************************( ccount_izaza End )


void about_company()// ******************* about companey frunction start 
{ 
system("color 6");
about:
system("cls");
cout<<"\t\t ************* \n";
cout<<"\t\t ABOUT COMPANY \n";
cout<<"\t\t ************* \n\n\n";
cout<<"\t 1. COMPANY ADDRESS \n\n";
cout<<"\t 2. CONTECT TROUGH SIM CARD \n\n";
cout<<"\t 3. CONTECT TROUGH EMIAL \n\n";
cout<<"\t 4. BACK MAIN MENU \n\n";
cout<<"\t    SELECT OPTION [1 t0 4]..";
cin>>about_com;
if(about_com=="1")
{
system("cls"); 
cout<<"\t\t *************** \n";
cout<<"\t\t COMPANY ADDRESS \n";
cout<<"\t\t *************** \n\n\n";
cout<<"\t 1. KARACHI \n\n";
cout<<"\t 2. ISLAMABAD \n\n";
cout<<"\t 3. LAHORE  \n\n";
cout<<"\t    PRESS [ANY KEY] FOR BACK..";
getch();
goto about;

}

else if(about_com=="2")
{
system("cls"); 
cout<<"\t\t *********************** \n";
cout<<"\t\t CONTECT TROUGH SIM CARD \n";
cout<<"\t\t *********************** \n\n\n";
cout<<"\t 1. UFONE      [ 03315982217 ] \n\n";
cout<<"\t 2. JAZZ       [ 03045088725 ] \n\n";
cout<<"\t 3. ZONG       [ 03215030802 ] \n\n";
cout<<"\t 4. TELENOR    [ 03215030802 ] \n\n";
cout<<"\t    PRESS [ANY KEY] FOR BACK..";
getch();
goto about;
	
}
else if(about_com=="3")
{
system("cls"); 
cout<<"\t\t ******************** \n";
cout<<"\t\t CONTECT TROUGH EMAIL \n";
cout<<"\t\t ******************** \n\n\n";
cout<<"\t    EMAIl  ceerali56@gamil.com \n\n";
cout<<"\t    EMAIl  ceermurtaza51214@gamil.com \n\n";
cout<<"\t    PRESS [ANY KEY] FOR BACK..";
getch();
goto about;
		
}

else if (about_com=="4")
{
system("cls"); 
main_menu();
	
}

else 
{
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
getch();
goto about; 

	
}	
}// ******************* about companey frunction end



void car_list1 () //******************************* bying carlist 1 start 
	{
	system("color 2");
	label111:
	system("cls");
	cout<<"\t\t\t ******** \n";
	cout<<"\t\t\t CAR LIST \n";
	cout<<"\t\t\t ******** \n\n\n";
	cout<<"\t1-HISPANO SUZIA GARMEN\n\n";
  	cout<<"\t2-PORSCHE 9TT\n\n";
  	cout<<"\t3-MERCEDES-AMG GT 63 \n\n";
  	cout<<"\t4-PORSCHE TAYCAN \n\n";
  	cout<<"\t5-PIECH MARK ZERO\n\n";
  	cout<<"\t6-FERRARI F8 \n\n";
  	cout<<"\t7-BENTLEY FLYING\n\n";
  	cout<<"\t8-HEMI HELLCAT \n\n";		
  	cout<<"\t9-DODGE CHARGER SRT\n\n";	
	cout<<"\t10-BMW M8\n\n";  			
	cout<<"\t11-FoR BACK MENU \n\n";
	cout<<"\tSELECT SELCT CAR [1 to 11] ";
	cin>>car_lis_buing;

	switch (car_lis_buing)// ******************************* switch statment end
	{
	case 1:
	{
		label6:
		system("cls");
		cout<<"\t\t ******************** \n";
		cout<<"\t\t HISPANO SUZIA GARMEN \n" ;
		cout<<"\t\t ******************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  250 km/h \n\n";
		cout<<"\t Prise       1.7 Million $ \n\n";
		cout<<"\t Discount    5% \n\n";
        cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label31:
	cout<<"\t SEND MY ACCOUNT (111023) 1.7000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1.7000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	break;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label31;
	}
	
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	
	else
	{
		
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	
	}
	break;	
	}
	
	case 2:
	{
	    system("cls");
		cout<<"\t\t *********** \n";
		cout<<"\t\t PORSCHE 9TT \n" ;
		cout<<"\t\t *********** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  2O5 km/h \n\n";
		cout<<"\t Prise       1 Million $ \n\n";
		cout<<"\t Discount    10% \n\n";
	  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label32:
	cout<<"\t SEND MY ACCOUNT (111023) 1000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
    goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label32;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	   break;	
	break;	
	}
	
		case 3:
	{
		system("cls");
		cout<<"\t\t ****************** \n";
		cout<<"\t\t MERCEDES-AMG GT 63 \n" ;
		cout<<"\t\t ****************** \n\n\n";
		cout<<"\t Model       2018 \n\n";
		cout<<"\t Tope speed  195 km/h \n\n";
		cout<<"\t Prise       1 Million $ \n\n";
		cout<<"\t Discount    10% \n\n";
	  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label34:
	cout<<"\t SEND MY ACCOUNT (111023) 1000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label34;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	    break;	
	}
	

		case 4:
	{
		system("cls");
		cout<<"\t\t ************** \n";
		cout<<"\t\t PORSCHE TAYCAN \n" ;
		cout<<"\t\t ************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  168 km/h \n\n";
		cout<<"\t Prise       80 LAKHS \n\n";
		cout<<"\t Discount    10% \n\n";
  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label35:
	cout<<"\t SEND MY ACCOUNT (111023) 800000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="800000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label35;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
		case 5:
	{
	    system("cls");
		cout<<"\t\t *************** \n";
		cout<<"\t\t PIECH MARK ZERO \n" ;
		cout<<"\t\t *************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  340 km/h \n\n";
		cout<<"\t Prise       3.6 Million $ \n\n";
		cout<<"\t Discount    2% \n\n";
  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label36:
	cout<<"\t SEND MY ACCOUNT (111023) 3.6000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="3.6000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label36;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
		case 6:
	{
		  system("cls");
		cout<<"\t\t ********** \n";
		cout<<"\t\t FERRARI F8 \n" ;
		cout<<"\t\t ********** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  250 km/h \n\n";
		cout<<"\t Prise       1.6 Million $ \n\n";
		cout<<"\t Discount    8% \n\n";
  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label38:
	cout<<"\t SEND MY ACCOUNT (111023) 1.6000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1.6000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
    goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label38;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
		case 7:
	{
		  system("cls");
		cout<<"\t\t ************** \n";
		cout<<"\t\t BENTLEY FLYING \n" ;
		cout<<"\t\t ************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  333 km/h \n\n";
		cout<<"\t Prise       2.6 Million $ \n\n";
		cout<<"\t Discount    8% \n\n";
  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label39:
	cout<<"\t SEND MY ACCOUNT (111023) 2.6000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="2.6000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label39;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
		case 8:
	{
		  system("cls");
		cout<<"\t\t *************** \n";
		cout<<"\t\t HEMI HELLCAT  \n" ;
		cout<<"\t\t *************** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  250 km/h \n\n";
		cout<<"\t Prise       1.8 Million $ \n\n";
		cout<<"\t Discount    20% \n\n";
        cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label40:
	cout<<"\t SEND MY ACCOUNT (111023) 1.8000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1.8000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
    goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label40;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
		case 9:
	{
		  system("cls");
		cout<<"\t\t ***************** \n";
		cout<<"\t\t DODGE CHARGER SRT \n" ;
		cout<<"\t\t ***************** \n\n\n";
		cout<<"\t Model       2018 \n\n";
		cout<<"\t Tope speed  196 km/h \n\n";
		cout<<"\t Prise       1 Million $ \n\n";
		cout<<"\t Discount    8% \n\n";
  cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label41:
	cout<<"\t SEND MY ACCOUNT (111023) 1000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label41;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
		case 10:
	{
		  system("cls");
		cout<<"\t\t ******** \n";
		cout<<"\t\t 10BMW M8 \n" ;
		cout<<"\t\t ******** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  190 km/h \n\n";
		cout<<"\t Prise       1.3 Million $ \n\n";
		cout<<"\t Discount    7% \n\n";
		 cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK.."; 
	   	cin>>car_by;
	if(car_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label42:
	cout<<"\t SEND MY ACCOUNT (111023) 1.3000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="1.3000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label111;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label42;
	}
	}
	else if(car_by=="2")
	{
	system("cls");
	goto label111;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label6;
	}
	break;	
	}
	
    case 11:
	{
    system("cls");
	product_bying();
	break;	
	}
	default:
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY] ";
		getch();
		goto label111;
	}

}//******************************* switch breaket end//

}//******************************* buing carlist  end//s 



//******************************( sport car bying  display function  start )
void sport_car1()
	{
	system("color 3");
	label112:
	system("cls");
	cout<<"\t\t\t ********** \n";
	cout<<"\t\t\t SPORT BIKE \n";
	cout<<"\t\t\t ********** \n\n\n\n";
	
  	cout<<"\t1- Kawasaki Ninja \n\n";
  	cout<<"\t2- MTT Y2K \n\n";	
  	cout<<"\t3- Suzuki Hayabusa GSX1300R \n\n";
  	cout<<"\t4- Aprillia RSV4 \n\n";
  	cout<<"\t5- BMW S1000RR \n\n";
  	cout<<"\t6- MV Agusta F4 RR \n\n";
  	cout<<"\t7- Ducati 1199 Panigale \n\n";
  	cout<<"\t8- Honda CBR1000RRR \n\n";		
  	cout<<"\t9- Yamaha YZF-R1M \n\n";
	cout<<"\t10-SUZUKI GSX R1000 \n\n";
	cout<<"\t11-FOR BACK MENU \n\n\n";
	cout<<"\t   SELECT SPORTS BIKE [1 to 11]..";
	cin>>sport_ca_bying;
	switch(sport_ca_bying)
	{
		
	case 1:
	{ 
	    label4:
		system("cls");
		cout<<"\t\t************** \n";
		cout<<"\t\tKawasaki Ninja \n";
		cout<<"\t\t************** \n\n\n";
	cout<<"\tMaximum Power   640 PS @ 14,000rpm \n\n";
  	cout<<"\tMaximum Torque  165 Nm @ 12,500rpm \n\n";
    cout<<"\tTop Speed       400 kmph \n\n";
    cout<<"\tPRISE           20 million $ \n\n";
	cout<<"\tDiscount        10% \n\n";
	cout<<"\tMODEL           2020 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>sport_by;
	if(sport_by=="1") 
	{
	system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label7:
	cout<<"\t SEND MY ACCOUNT (111023) 20000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="20000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label7;
	}
	
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;
	}
	
	case 2:
	{
	system("cls");
	cout<<"\t\t******* \n";
	cout<<"\t\tMTT Y2K \n";
	cout<<"\t\t******* \n\n\n";
	cout<<"\tMaximum Power   32.00 HP(233.6kW) @ 52,000rpm\n\n";
  	cout<<"\tMaximum Torque  576.30Nm @ 2,000rpm\n\n";
  	cout<<"\tTop Speed       375 kmph\n\n";
    cout<<"\tPRISE           16 million $ \n\n";
	cout<<"\tDiscount        6% \n\n";
	cout<<"\tMODEL           2018 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label8:
	cout<<"\t SEND MY ACCOUNT (111023) 16000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="16000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label8;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;	
	}
	
	case 3:
	{
	system("cls");
	cout<<"\t\t*************** \n";
	cout<<"\t\tSuzuki Hayabusa \n";
	cout<<"\t*************** \n\n\n";	
    cout<<"\tMaximum Power   200 HP @ 9500rpm\n\n";
  	cout<<"\tMaximum Torque  117Nm @ 10,000rpm\n\n";
  	cout<<"\tTop Speed       330 kmph\n\n";
	cout<<"\tPRISE           12 million $ \n\n";
	cout<<"\tDiscount        8% \n\n";
	cout<<"\tMODEL           2017 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label9:
	cout<<"\t SEND MY ACCOUNT (111023) 12000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="12000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label9;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;
	}
	
	case 4:
	{
	system("cls");
	cout<<"\t\t************* \n";
	cout<<"\t\tAprillia RSV4 \n";
	cout<<"\t\t************* \n\n\n";
	cout<<"\tMaximum Power   181.4Bhp @ 12,500rpm\n\n";
  	cout<<"\tMaximum Torque  117Nm @ 10,000rpm\n\n";
    cout<<"\tTop Speed       328 kmph\n\n";
	cout<<"\tPRISE           24 million $ \n\n";
	cout<<"\tDiscount        15% \n\n";
	cout<<"\tMODEL           2019 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label11:
	cout<<"\t SEND MY ACCOUNT (111023) 24000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="24000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label11;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;
	}
	
	case 5:
	{
	system("cls");
	cout<<"\t\t*********** \n";
	cout<<"\t\tBMW S1000RR \n";
	cout<<"\t\t*********** \n\n\n";
	cout<<"\tMaximum Power   199HP @ 13,500rpm\n\n";
    cout<<"\tMaximum Torque  113Nm @ 10,500rpm\n\n";
  	cout<<"\tTop Speed       322 kmph\n\n";
	cout<<"\tPRISE           16 million $ \n\n";
	cout<<"\tDiscount        10% \n\n";
	cout<<"\tMODEL           2018 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label12:
	cout<<"\t SEND MY ACCOUNT (111023) 16000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="16000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label12;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;	
	}
	
	case 6:
	{
	system("cls");
	cout<<"\t\t************ \n";
	cout<<"\t\tMV Agusta F4 \n";
	cout<<"\t\t************ \n\n\n";
	cout<<"\tMaximum Power   201HP @ 13,600rpm\n\n";
  	cout<<"\tMaximum Torque  111Nm @ 9,600rpm\n\n";
  	cout<<"\tTop Speed       308 kmph\n\n";
	cout<<"\tPRISE           16 million $ \n\n";
	cout<<"\tDiscount        13% \n\n";
	cout<<"\tMODEL           2017 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label13:
	cout<<"\t SEND MY ACCOUNT (111023) 16000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="16000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label13;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;	
	}
	
	case 7:
	{
	system("cls");
	cout<<"\t\t******************** \n";
	cout<<"\t\tDucati 1199 Panigale \n";
	cout<<"\t\t******************** \n\n\n";
	cout<<"\tMaximum Power   195Bhp @ 10,750rpm\n\n";
  	cout<<"\tMaximum Torque  132 Nm @ 9,000rpm\n\n";
  	cout<<"\tTop Speed       304 kmph\n\n";
	cout<<"\tPRISE           11 million $ \n\n";
	cout<<"\tDiscount        10% \n\n";
	cout<<"\tMODEL           2016 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label16:
	cout<<"\t SEND MY ACCOUNT (111023) 11000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="11000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label16;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}

	break;	
	}
	
	case 8:
	{
	system("cls");
	cout<<"\t\t**************** \n";
	cout<<"\t\tHonda CBR1000RRR \n";
	cout<<"\t\t**************** \n\n\n";
	cout<<"\tMaximum Power   189Bhp @ 13,000rpm\n\n";
  	cout<<"\tMaximum Torque  114 Nm @ 11,00rpm\n\n";
  	cout<<"\tTop Speed       300 kmph\n\n";
    cout<<"\tPRISE           10 million $ \n\n";
	cout<<"\tDiscount        16% \n\n";
	cout<<"\tMODEL           2015 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label17:
	cout<<"\t SEND MY ACCOUNT (111023) 10000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="10000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label17;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;	
	}
	
	case 9:
	{
	system("cls");
	cout<<"\t\t************** \n";
	cout<<"\t\tYamaha YZF-R1M \n";
	cout<<"\t\t************** \n\n\n";
	cout<<"\tMaximum Power   197.2Bhp @ 13,500rpm\n\n";
  	cout<<"\tMaximum Torque  112.4 Nm @ 11,500rpm\n\n";
  	cout<<"\tTop Speed       299+ kmph\n\n";
	cout<<"\tPRISE           10 million $ \n\n";
	cout<<"\tDiscount        5% \n\n";
	cout<<"\tMODEL           2014 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label18:
	cout<<"\t SEND MY ACCOUNT (111023) 10000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="10000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label18;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	
	break;	
	}
	
	case 10:
	{
	system("cls");
	cout<<"\t\t**************** \n";
	cout<<"\t\tSUZUKI GSX R1000 \n";
	cout<<"\t\t**************** \n\n\n";
	cout<<"\tMaximum Power   197.3Bhp @ 10,000rpm\n\n";
  	cout<<"\tMaximum Torque  158 Nm @ 7,500rpm\n\n";
  	cout<<"\tTop Speed       300 kmph\n\n";  			
	cout<<"\tPRISE           8 million $ \n\n";
	cout<<"\tDiscount        7% \n\n";
	cout<<"\tMODEL           2016 \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
    cin>>sport_by;
	if(sport_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label20:
	cout<<"\t SEND MY ACCOUNT (111023) 8000000 $ ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="8000000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label112;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label20;
	}
	}
	else if(sport_by=="2")
	{
	system("cls");
	goto label112;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label4;
	}
	break;	
	}
	
	case 11:
	{
	system("cls");
	product_bying();
	break;	
	}
	default:
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY] ";
	getch();
	sport_car1();	
	}
		
	} //******************************( switch statment )
	
	}//******************************( sport car bying  display function end )


void motor_byke1()// ******************************* motor byke bying ffunction start 
	{
	system("color 4");
	label113:
	system("cls");
    cout<<"\t\t\t ********** \n";
  	cout<<"\t\t\t MOTOR BIKE \n";
  	cout<<"\t\t\t ********** \n\n\n\n";
  	cout<<"\t1  HI-SPEED No 1\n\n";
  	cout<<"\t2  TREET \n\n";
  	cout<<"\t3  UNIQUE \n\n";
  	cout<<"\t4  RAVI \n\n";
  	cout<<"\t5  CROWN \n\n";
  	cout<<"\t6  SUPER POWER \n\n";
  	cout<<"\t7  ROAD PRINCE \n\n";
  	cout<<"\t8  METRO \n\n";		
  	cout<<"\t9  EAGLE \n\n";
	cout<<"\t10 BACK FOR BACK MENU \n\n";
	cout<<"\t SELECT MOTOR BIKE [1 to 10 ] ";
	cin>>motor_bike_byi;
	cout<<"\n\n";
	//****************************************// switch ststment start
	switch(motor_bike_byi)
	{
	case 1:
	{
		label5:
	system("cls");
	cout<<"\t\t ************* \n";
	cout<<"\t\t HI SPEED BIKE \n";
	cout<<"\t\t ************* \n\n\n";
	cout<<"\t Model   2020 \n\n";
	cout<<"\t Engine  70 CC \n\n";
	cout<<"\t prise    42500 \n\n";
	cout<<"\t Discount 10% \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label22:
	cout<<"\t SEND MY ACCOUNT (111023) 42500 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="42500")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label22;
	}
	}
	
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;	
    }
	case 2:
	{
	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t TREET BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2018 \n\n";
	cout<<"\t Engine   50 CC \n\n";
	cout<<"\t prise    85000 \n\n";
	cout<<"\t Discount 5% \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	if(motor_by=="1") 
	{
	system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label23:
	cout<<"\t SEND MY ACCOUNT (111023) 85000 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="85000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label23;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;
	
	break;	
	}
	
	case 3:
	{
	system("cls");
	cout<<"\t\t *********** \n";
	cout<<"\t\t UNIQUE BIKE \n";
	cout<<"\t\t *********** \n\n\n";
	cout<<"\t Model    2020 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    45000 \n\n";
	cout<<"\t Discount 15% \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label24:
	cout<<"\t SEND MY ACCOUNT (111023) 45000 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="45000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label24;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;	
	}
	
	case 4:
	{
	system("cls");
	cout<<"\t\t ********* \n";
	cout<<"\t\t RAVI BIKE \n";
	cout<<"\t\t ********* \n\n\n";
	cout<<"\t Model    2017 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    40000 \n\n";
	cout<<"\t Discount 25% \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label25:
	cout<<"\t SEND MY ACCOUNT (111023) 40000 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="40000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label25;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
		break;	
	}
	
	case 5:
	{
   	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t CROWN BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2020 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    42000 \n\n";
	cout<<"\t Discount 20% \n\n\n";
    cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label26:
	cout<<"\t SEND MY ACCOUNT (111023) 42000 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="42000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label26;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}	
	break;	
	}
	
	case 6:
	{
	system("cls");
	cout<<"\t\t **************** \n";
	cout<<"\t\t SUPER POWER BIKE \n";
	cout<<"\t\t **************** \n\n\n";
	cout<<"\t Model    2018 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    42000 \n\n";
	cout<<"\t Discount 30% \n\n\n";
    cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label27:
	cout<<"\t SEND MY ACCOUNT (111023) 42000  ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="42000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label27;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;	
	}
	
	case 7:
	{
	system("cls");
	cout<<"\t\t **************** \n";
	cout<<"\t\t ROAD PRINCE BIKE \n";
	cout<<"\t\t **************** \n\n\n";
	cout<<"\t Model    2015 \n\n";
	cout<<"\t Engine   50 CC \n\n";
	cout<<"\t prise    42000 \n\n";
	cout<<"\t Discount 20% \n\n\n";
    cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
	cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label28:
	cout<<"\t SEND MY ACCOUNT (111023) 42000 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="42000")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label28;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;	
	}
	
	case 8:
	{
	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t METRO BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2014 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    38500 \n\n";
	cout<<"\t Discount 10% \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
		cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label29:
	cout<<"\t SEND MY ACCOUNT (111023) 38500 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="38500")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label29;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
	goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;	
	}
	
	case 9:
	{
	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t EAGLE BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2014 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    37500 \n\n";
	cout<<"\t Discount 20% \n\n\n";
	cout<<"\tPRESS [1] FOR BYING  [2] FOR BACK..";
		cin>>motor_by;
	if(motor_by=="1") 
	{
		system("cls");
	cout<<"\t\t *******\n";
	cout<<"\t\t PAIMENT \n";
	cout<<"\t\t *******\n\n\n";
	cout<<"\t PLEASE ENTER YOUR FULL NAME ";
	cin>>full_name;
	cout<<"\n\n";
	cout<<"\t PLEASE ENTER YOUR ID CARD NO ";
	cin>>id_card;
	cout<<"\n\n";
	cout<<"\t ENTER CURRENT DATE ";
	cin>>date;
	cout<<"\n\n";
	label30:
	cout<<"\t SEND MY ACCOUNT (111023) 37500 ";
	cin>>cash;
	check3=5;
	check5=5;
	cout<<"\n\n";
	if(cash=="37500")
	{
	cout<<"\t PAIMENT SUCCESSFULL \n\n";
	cout<<"\t PLEASE GOTO DELIVERY OPTION\n\n";
	cout<<"\t PRESS [ANY KEY] FOR BACK..";
	getch();
	goto label113;
	}
	else
	{
	cout<<"\t PLEASE SEND ME FULL AMOUNT\n\n";
	goto label30;
	}
	}
	else if(motor_by=="2")
	{
	system("cls");
    goto label113;
	}
	else
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tINVILED OPTION PRESS [ANY KEY].. ";
	getch();
	goto label5;
	}
	break;	
	}
	
	case 10:
	{
    system("cls");
    product_bying();
	break;	
	}
	default:
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY] ";
	getch();
	goto label113;
	}
	
	}//****************************************// switch ststment end\\
  		  	
	
} //****************************************// MOTOR BIKE bying list end


//******************************( sport car display function  start )
void sport_car()
	{
	system("color 5");
	label114:
	system("cls");
	cout<<"\t\t\t ********** \n";
	cout<<"\t\t\t SPORT BIKE \n";
	cout<<"\t\t\t ********** \n\n\n\n";
	
  	cout<<"\t1- Kawasaki Ninja \n\n";
  	cout<<"\t2- MTT Y2K \n\n";	
  	cout<<"\t3- Suzuki Hayabusa GSX1300R \n\n";
  	cout<<"\t4- Aprillia RSV4 \n\n";
  	cout<<"\t5- BMW S1000RR \n\n";
  	cout<<"\t6- MV Agusta F4 RR \n\n";
  	cout<<"\t7- Ducati 1199 Panigale \n\n";
  	cout<<"\t8- Honda CBR1000RRR \n\n";		
  	cout<<"\t9- Yamaha YZF-R1M \n\n";
	cout<<"\t10-SUZUKI GSX R1000 \n\n";
	cout<<"\t11-FOR BACK MENU \n\n\n";
	cout<<"\t   PLEASE SELECT OPTION [1 to 11]..";
	cin>>sport_ca;
	switch(sport_ca)
	{
		
	case 1:
	{
		system("cls");
		cout<<"\t\t************** \n";
		cout<<"\t\tKawasaki Ninja \n";
		cout<<"\t\t************** \n\n\n";
	cout<<"\tMaximum Power   640 PS @ 14,000rpm \n\n";
  	cout<<"\tMaximum Torque  165 Nm @ 12,500rpm \n\n";
    cout<<"\tTop Speed       400 kmph \n\n";
    cout<<"\tPRISE           20 million $ \n\n";
	cout<<"\tDiscount        10% \n\n";
	cout<<"\tMODEL           2020 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 2:
	{
	system("cls");
	cout<<"\t\t******* \n";
	cout<<"\t\tMTT Y2K \n";
	cout<<"\t\t******* \n\n\n";
	cout<<"\tMaximum Power   32.00 HP(233.6kW) @ 52,000rpm\n\n";
  	cout<<"\tMaximum Torque  576.30Nm @ 2,000rpm\n\n";
  	cout<<"\tTop Speed       375 kmph\n\n";
    cout<<"\tPRISE           16 million $ \n\n";
	cout<<"\tDiscount        6% \n\n";
	cout<<"\tMODEL           2018 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 3:
	{
	system("cls");
	cout<<"\t\t*************** \n";
	cout<<"\t\tSuzuki Hayabusa \n";
	cout<<"\t*************** \n\n\n";	
    cout<<"\tMaximum Power   200 HP @ 9500rpm\n\n";
  	cout<<"\tMaximum Torque  117Nm @ 10,000rpm\n\n";
  	cout<<"\tTop Speed       330 kmph\n\n";
	cout<<"\tPRISE           12 million $ \n\n";
	cout<<"\tDiscount        8% \n\n";
	cout<<"\tMODEL           2017 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;	
	break;	
	}
	
	case 4:
	{
	system("cls");
	cout<<"\t\t************* \n";
	cout<<"\t\tAprillia RSV4 \n";
	cout<<"\t\t************* \n\n\n";
	cout<<"\tMaximum Power   181.4Bhp @ 12,500rpm\n\n";
  	cout<<"\tMaximum Torque  117Nm @ 10,000rpm\n\n";
    cout<<"\tTop Speed       328 kmph\n\n";
	cout<<"\tPRISE           24 million $ \n\n";
	cout<<"\tDiscount        15% \n\n";
	cout<<"\tMODEL           2019 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 5:
	{
	system("cls");
	cout<<"\t\t*********** \n";
	cout<<"\t\tBMW S1000RR \n";
	cout<<"\t\t*********** \n\n\n";
	cout<<"\tMaximum Power   199HP @ 13,500rpm\n\n";
    cout<<"\tMaximum Torque  113Nm @ 10,500rpm\n\n";
  	cout<<"\tTop Speed       322 kmph\n\n";
	cout<<"\tPRISE           16 million $ \n\n";
	cout<<"\tDiscount        10% \n\n";
	cout<<"\tMODEL           2018 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 6:
	{
	system("cls");
	cout<<"\t\t************ \n";
	cout<<"\t\tMV Agusta F4 \n";
	cout<<"\t\t************ \n\n\n";
	cout<<"\tMaximum Power   201HP @ 13,600rpm\n\n";
  	cout<<"\tMaximum Torque  111Nm @ 9,600rpm\n\n";
  	cout<<"\tTop Speed       308 kmph\n\n";
	cout<<"\tPRISE           16 million $ \n\n";
	cout<<"\tDiscount        13% \n\n";
	cout<<"\tMODEL           2017 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 7:
	{
	system("cls");
	cout<<"\t\t******************** \n";
	cout<<"\t\tDucati 1199 Panigale \n";
	cout<<"\t\t******************** \n\n\n";
	cout<<"\tMaximum Power   195Bhp @ 10,750rpm\n\n";
  	cout<<"\tMaximum Torque  132 Nm @ 9,000rpm\n\n";
  	cout<<"\tTop Speed       304 kmph\n\n";
	cout<<"\tPRISE           11 million $ \n\n";
	cout<<"\tDiscount        10% \n\n";
	cout<<"\tMODEL           2016 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 8:
	{
	system("cls");
	cout<<"\t\t**************** \n";
	cout<<"\t\tHonda CBR1000RRR \n";
	cout<<"\t\t**************** \n\n\n";
	cout<<"\tMaximum Power   189Bhp @ 13,000rpm\n\n";
  	cout<<"\tMaximum Torque  114 Nm @ 11,00rpm\n\n";
  	cout<<"\tTop Speed       300 kmph\n\n";
    cout<<"\tPRISE           10 million $ \n\n";
	cout<<"\tDiscount        16% \n\n";
	cout<<"\tMODEL           2015 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 9:
	{
	system("cls");
	cout<<"\t\t************** \n";
	cout<<"\t\tYamaha YZF-R1M \n";
	cout<<"\t\t************** \n\n\n";
	cout<<"\tMaximum Power   197.2Bhp @ 13,500rpm\n\n";
  	cout<<"\tMaximum Torque  112.4 Nm @ 11,500rpm\n\n";
  	cout<<"\tTop Speed       299+ kmph\n\n";
	cout<<"\tPRISE           10 million $ \n\n";
	cout<<"\tDiscount        5% \n\n";
	cout<<"\tMODEL           2014 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 10:
	{
	system("cls");
	cout<<"\t\t**************** \n";
	cout<<"\t\tSUZUKI GSX R1000 \n";
	cout<<"\t\t**************** \n\n\n";
	cout<<"\tMaximum Power   197.3Bhp @ 10,000rpm\n\n";
  	cout<<"\tMaximum Torque  158 Nm @ 7,500rpm\n\n";
  	cout<<"\tTop Speed       300 kmph\n\n";  			
	cout<<"\tPRISE           8 million $ \n\n";
	cout<<"\tDiscount        7% \n\n";
	cout<<"\tMODEL           2016 \n\n\n";
	cout<<"\tPRESS [ANY KEY] FOR BACK..";
	getch();
	goto label114;
	break;	
	}
	
	case 11:
	{
	system("cls");
	product_list();	
	break;	
	}
	default:
	{
		system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY] ";
	getch();
	goto label114;	
	}
	
	
		
	}
	
	}//******************************( sport car display function end )

//******************************(   function product list  start)
void product_list()
{system("color 6");
	label115:
	system("cls");
	cout<<"\t\t\t ************ \n";
	cout<<"\t\t\t PRODUCT LIST \n";
	cout<<"\t\t\t ************ \n\n\n\n";
	
	cout<<"\t 1-CARS LIST\n\n";
	cout<<"\t 2-MOTOR BIKE\n\n";
	cout<<"\t 3-SPORTS CAR OR BIKE \n\n";
	cout<<"\t 4-BACK TO MAIN MENU \n\n";
	cout<<"\t SELECT OPTION [1 to 4]  ";
	cin>>product_lis;
	if(product_lis=="1")
	{
	car_list();
    }
	
	else if(product_lis=="2")
	{
	motor_byke();
	}
	
	else if(product_lis=="3")
	{
    sport_car();
	}
	else if(product_lis=="4")
	{
	system("cls");
	main_menu();
	}
	else 
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t WRONG OPTION ANY KEY TO CONTINUE ";
	getch();
	
	goto label115;
	}
	
}
//****************************************// function motor car start\\	

void motor_byke()
	{system("color 2");
		label116:
		system("cls");
    cout<<"\t\t\t ********** \n";
  	cout<<"\t\t\t MOTOR BIKE \n";
  	cout<<"\t\t\t ********** \n\n\n\n";
  	cout<<"\t1  HI-SPEED No 1\n\n";
  	cout<<"\t2  TREET \n\n";
  	cout<<"\t3  UNIQUE \n\n";
  	cout<<"\t4  RAVI \n\n";
  	cout<<"\t5  CROWN \n\n";
  	cout<<"\t6  SUPER POWER \n\n";
  	cout<<"\t7  ROAD PRINCE \n\n";
  	cout<<"\t8  METRO \n\n";		
  	cout<<"\t9  EAGLE \n\n";
	cout<<"\t10 BACK FOR BACK MENU \n\n";
	cout<<"\t PLEASE SELECT OPTION HERE [1 to 10 ] ";
	cin>>motor_bike;
	cout<<"\n\n";
	//****************************************// switch ststment start
	switch(motor_bike)
	{
	case 1:
	{
		system("cls");
	cout<<"\t\t ************* \n";
	cout<<"\t\t HI SPEED BIKE \n";
	cout<<"\t\t ************* \n\n\n";
	cout<<"\t Model   2020 \n\n";
	cout<<"\t Engine  70 CC \n\n";
	cout<<"\t prise    42500 \n\n";
	cout<<"\t Discount 10% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;	
    }
	case 2:
	{
	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t TREET BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2018 \n\n";
	cout<<"\t Engine   50 CC \n\n";
	cout<<"\t prise    85000 \n\n";
	cout<<"\t Discount 5% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;
	
	break;	
	}
	
	case 3:
	{
	system("cls");
	cout<<"\t\t *********** \n";
	cout<<"\t\t UNIQUE BIKE \n";
	cout<<"\t\t *********** \n\n\n";
	cout<<"\t Model    2020 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    45000 \n\n";
	cout<<"\t Discount 15% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;	
	}
	
	case 4:
	{
	system("cls");
	cout<<"\t\t ********* \n";
	cout<<"\t\t RAVI BIKE \n";
	cout<<"\t\t ********* \n\n\n";
	cout<<"\t Model    2017 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    40000 \n\n";
	cout<<"\t Discount 25% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
		break;	
	}
	
	case 5:
	{
   	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t CROWN BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2020 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    42000 \n\n";
	cout<<"\t Discount 20% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;	
	}
	
	case 6:
	{
	system("cls");
	cout<<"\t\t **************** \n";
	cout<<"\t\t SUPER POWER BIKE \n";
	cout<<"\t\t **************** \n\n\n";
	cout<<"\t Model    2018 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    42000 \n\n";
	cout<<"\t Discount 30% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;	
	break;	
	}
	
	case 7:
	{
	system("cls");
	cout<<"\t\t **************** \n";
	cout<<"\t\t ROAD PRINCE BIKE \n";
	cout<<"\t\t **************** \n\n\n";
	cout<<"\t Model    2015 \n\n";
	cout<<"\t Engine   50 CC \n\n";
	cout<<"\t prise    42000 \n\n";
	cout<<"\t Discount 20% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;	
	}
	
	case 8:
	{
	 	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t METRO BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2014 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    38500 \n\n";
	cout<<"\t Discount 10% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;	
	}
	
	case 9:
	{
	system("cls");
	cout<<"\t\t ********** \n";
	cout<<"\t\t EAGLE BIKE \n";
	cout<<"\t\t ********** \n\n\n";
	cout<<"\t Model    2014 \n\n";
	cout<<"\t Engine   70 CC \n\n";
	cout<<"\t prise    37500 \n\n";
	cout<<"\t Discount 20% \n\n\n";
	cout<<"\t PRESS [ANY KEY] for back.. ";
	getch();
	goto label116;
	break;	
	}
	
	case 10:
	{
	product_list();
	break;	
	}
	default:
	{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]";
	getch();
	goto label116;
	}
	
	}//****************************************// switch ststment end\\
  		  	
	
} //****************************************// MOTOR BIKE list end
	

//****************************************// function carlist start
void car_list ()
	{
		system("color 3");
	 label117:
	system("cls");
	cout<<"\t\t\t ******** \n";
	cout<<"\t\t\t CAR LIST \n";
	cout<<"\t\t\t ******** \n\n\n";
	cout<<"\t1-HISPANO SUZIA GARMEN\n\n";
  	cout<<"\t2-PORSCHE 9TT\n\n";
  	cout<<"\t3-MERCEDES-AMG GT 63 \n\n";
  	cout<<"\t4-PORSCHE TAYCAN \n\n";
  	cout<<"\t5-PIECH MARK ZERO\n\n";
  	cout<<"\t6-FERRARI F8 \n\n";
  	cout<<"\t7-BENTLEY FLYING\n\n";
  	cout<<"\t8-HEMI HELLCAT \n\n";		
  	cout<<"\t9-DODGE CHARGER SRT\n\n";	
	cout<<"\t10-BMW M8\n\n";  			
	cout<<"\t11-FoR BACK MENU \n\n";
	cout<<"\tENTER BELOW OPTION [1 to 11] ";
	cin>>car_lis;
// ******************************* switch statment end
	switch (car_lis)
	{
	case 1:
	{
		system("cls");
		cout<<"\t\t ******************** \n";
		cout<<"\t\t HISPANO SUZIA GARMEN \n" ;
		cout<<"\t\t ******************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  250 km/h \n\n";
		cout<<"\t Prise       1.7 Million $ \n\n";
		cout<<"\t Discount    5% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
	goto label117;
	    break;	
	}
	
	case 2:
	{
	    system("cls");
		cout<<"\t\t *********** \n";
		cout<<"\t\t PORSCHE 9TT \n" ;
		cout<<"\t\t *********** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  2O5 km/h \n\n";
		cout<<"\t Prise       1 Million $ \n\n";
		cout<<"\t Discount    10% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	   break;	
	break;	
	}
	
		case 3:
	{
		system("cls");
		cout<<"\t\t ****************** \n";
		cout<<"\t\t MERCEDES-AMG GT 63 \n" ;
		cout<<"\t\t ****************** \n\n\n";
		cout<<"\t Model       2018 \n\n";
		cout<<"\t Tope speed  195 km/h \n\n";
		cout<<"\t Prise       1 Million $ \n\n";
		cout<<"\t Discount    10% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	    break;
	break;	
	}

		case 4:
	{
		system("cls");
		cout<<"\t\t ************** \n";
		cout<<"\t\t PORSCHE TAYCAN \n" ;
		cout<<"\t\t ************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  168 km/h \n\n";
		cout<<"\t Prise       80 LAKHS \n\n";
		cout<<"\t Discount    10% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	    break;
	break;	
	}
	
		case 5:
	{
	    system("cls");
		cout<<"\t\t *************** \n";
		cout<<"\t\t PIECH MARK ZERO \n" ;
		cout<<"\t\t *************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  340 km/h \n\n";
		cout<<"\t Prise       3.6 Million $ \n\n";
		cout<<"\t Discount    2% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	   break;
	break;	
	}
	
		case 6:
	{
		  system("cls");
		cout<<"\t\t ********** \n";
		cout<<"\t\t FERRARI F8 \n" ;
		cout<<"\t\t ********** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  250 km/h \n\n";
		cout<<"\t Prise       1.6 Million $ \n\n";
		cout<<"\t Discount    8% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
	goto label117;
	break;	
	}
	
		case 7:
	{
		  system("cls");
		cout<<"\t\t ************** \n";
		cout<<"\t\t BENTLEY FLYING \n" ;
		cout<<"\t\t ************** \n\n\n";
		cout<<"\t Model       2020 \n\n";
		cout<<"\t Tope speed  333 km/h \n\n";
		cout<<"\t Prise       2.6 Million $ \n\n";
		cout<<"\t Discount    8% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	break;	
	}
	
		case 8:
	{
		  system("cls");
		cout<<"\t\t *************** \n";
		cout<<"\t\t HEMI HELLCAT  \n" ;
		cout<<"\t\t *************** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  250 km/h \n\n";
		cout<<"\t Prise       1.8 Million $ \n\n";
		cout<<"\t Discount    20% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	break;	
	}
	
		case 9:
	{
		  system("cls");
		cout<<"\t\t ***************** \n";
		cout<<"\t\t DODGE CHARGER SRT \n" ;
		cout<<"\t\t ***************** \n\n\n";
		cout<<"\t Model       2018 \n\n";
		cout<<"\t Tope speed  196 km/h \n\n";
		cout<<"\t Prise       1 Million $ \n\n";
		cout<<"\t Discount    8% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
		goto label117;
	break;	
	}
	
		case 10:
	{
		  system("cls");
		cout<<"\t\t ******** \n";
		cout<<"\t\t 10BMW M8 \n" ;
		cout<<"\t\t ******** \n\n\n";
		cout<<"\t Model       2019 \n\n";
		cout<<"\t Tope speed  190 km/h \n\n";
		cout<<"\t Prise       1.3 Million $ \n\n";
		cout<<"\t Discount    7% \n\n";
		cout<<"\t prees [ANY KEY] for back.. ";
		getch();
	goto label117;
	break;	
	}
	
    case 11:
	{
	product_list();
	break;	
	}
	default:
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY] ";
		getch();
		goto label117;
	}
	
	
		
	}// ******************************* switch statment end
	

	}//****************************************// function carlist end\\	


void rent ()//******************* function rent difinition start //
{
	system("color 4");
	rent:
			
	system("cls");
	cout<<"\t\t **************** \n";
	cout<<"\t\t AVAIBLE VEHICLES \n";
	cout<<"\t\t **************** \n\n\n";
	cout<<"\t 1 MEHRAN CAR \n\n";
	cout<<"\t 2 CORROLA XLI \n\n";
	cout<<"\t 3 CORROLA GLI \n\n";
	cout<<"\t 4 CORROLA ALTISE \n\n";
	cout<<"\t 5 FILDER \n\n";
	cout<<"\t 6 MERCIDIES \n\n";
	cout<<"\t 7 HIGH SPEED \n\n";
	cout<<"\t 8 HONDA [125] \n\n";
	cout<<"\t 9 YAMAHA YBR \n\n";
	cout<<"\t 10 EXIT \n\n";
	cout<<"\t SELECT OPTION [1 to 10]..";
	cin>>rent_avi;
	switch(rent_avi)//******************* switch brecket start //
	{
	
	case 1:
	{
		system("color 2");
	ren:
	string nam1,id1;
	int rent1,payment;
	system("cls");
    cout<<"\t\t ********** \n";
    cout<<"\t\t MEHRAN CAR \n";
    cout<<"\t\t ********** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.150 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.1000 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.1600 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent1;
    if(rent1==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam1;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id1;
    cout<<"\n\n";
    l1:
    cout<<"\t PAY YOUR PAYMENT (150) ..";
    cin>>payment;
    cout<<"\n\n";
    if(payment==150)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l1;
		
	}
	
	}// **************** if statment  end 
	else if(rent1==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam1;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id1;
    cout<<"\n\n";
    l2:
    cout<<"\t PAY YOUR PAYMENT (1000) ..";
    cin>>payment;
    cout<<"\n\n";
    if(payment==1000)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l2;
		
	}
	
		
	}// **************** else if 2 statment  end 
	
	else if(rent1==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam1;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id1;
    cout<<"\n\n";
    l3:
    cout<<"\t PAY YOUR PAYMENT (1600) ..";
    cin>>payment;
    cout<<"\n\n";
    if(payment==1600)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l3;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent1==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren;	
	}// **************** else statment  end 
	break;	
	} //************************** case 1 complete //
	
	
	case 2:
	{
		system("color 6");
	ren2:
	string nam2,id2;
	int rent2,payment2;
	system("cls");
    cout<<"\t\t *********** \n";
    cout<<"\t\t CORROLA XLI \n";
    cout<<"\t\t *********** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.200 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.1300 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.1800 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent2;
    if(rent2==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam2;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id2;
    cout<<"\n\n";
    l6:
    cout<<"\t PAY YOUR PAYMENT (200) ..";
    cin>>payment2;
    cout<<"\n\n";
    if(payment2==200)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l6;
		
	}
	
	}// **************** if statment  end 
	else if(rent2==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam2;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id2;
    cout<<"\n\n";
    l4:
    cout<<"\t PAY YOUR PAYMENT (1300) ..";
    cin>>payment2;
    cout<<"\n\n";
    if(payment2==1300)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l4;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent2==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam2;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id2;
    cout<<"\n\n";
    l5:
    cout<<"\t PAY YOUR PAYMENT (1800) ..";
    cin>>payment2;
    cout<<"\n\n";
    if(payment2==1800)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l5;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent2==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren2;	
	}// **************** else statment  end 
	
	break;	
	} // case 2 complete **********************//
	
	
		case 3:// case 3 start **********************//
	{
		system("color 5");
	ren3:
	string nam3,id3;
	int rent3,payment3;
	system("cls");
    cout<<"\t\t *********** \n";
    cout<<"\t\t CORROLA GLI \n";
    cout<<"\t\t *********** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.250 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.1500 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.2000 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent3;
    if(rent3==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam3;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id3;
    cout<<"\n\n";
    l7:
    cout<<"\t PAY YOUR PAYMENT (250) ..";
    cin>>payment3;
    cout<<"\n\n";
    if(payment3==250)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l7;
		
	}
	
	}// **************** if statment  end 
	else if(rent3==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam3;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id3;
    cout<<"\n\n";
    l8:
    cout<<"\t PAY YOUR PAYMENT (1500) ..";
    cin>>payment3;
    cout<<"\n\n";
    if(payment3==1500)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l8;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent3==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam3;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id3;
    cout<<"\n\n";
    l9:
    cout<<"\t PAY YOUR PAYMENT (2000) ..";
    cin>>payment3;
    cout<<"\n\n";
    if(payment3==2000)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l9;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent3==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren3;	
	}// **************** else statment  end 
		
	break;	
	}// **************** case 3 end statment  
	
	
		case 4:// **************** case 4 start  statment  
	{
	system("color 3");
	ren4:
	string nam4,id4;
	int rent4,payment4;
	system("cls");
    cout<<"\t\t ************** \n";
    cout<<"\t\t CORROLA ALTISE \n";
    cout<<"\t\t ************** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.300 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.1700 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.2200 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent4;
    if(rent4==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam4;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id4;
    cout<<"\n\n";
    l10:
    cout<<"\t PAY YOUR PAYMENT (300) ..";
    cin>>payment4;
    cout<<"\n\n";
    if(payment4==300)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l10;
		
	}
	
	}// **************** if statment  end 
	else if(rent4==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam4;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id4;
    cout<<"\n\n";
    l12:
    cout<<"\t PAY YOUR PAYMENT (1300) ..";
    cin>>payment4;
    cout<<"\n\n";
    if(payment4==1300)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l12;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent4==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam4;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id4;
    cout<<"\n\n";
    l13:
    cout<<"\t PAY YOUR PAYMENT (2200) ..";
    cin>>payment4;
    cout<<"\n\n";
    if(payment4==2200)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l13;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent4==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren4;	
	}// **************** else statment  end 
	break;	
	}// **************** case 4 statment  end 
	
	
	case 5:// **************** case 5 statment  start
	{
		system("color 3");
		ren5:
	string nam5,id5;
	int rent5,payment5;
	system("cls");
    cout<<"\t\t ****** \n";
    cout<<"\t\t FILDER \n";
    cout<<"\t\t ****** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.350 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.1900 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.2400 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent5;
    if(rent5==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam5;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id5;
    cout<<"\n\n";
    l14:
    cout<<"\t PAY YOUR PAYMENT (350) ..";
    cin>>payment5;
    cout<<"\n\n";
    if(payment5==350)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l14;
		
	}
	
	}// **************** if statment  end 
	else if(rent5==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam5;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id5;
    cout<<"\n\n";
    l15:
    cout<<"\t PAY YOUR PAYMENT (1900) ..";
    cin>>payment5;
    cout<<"\n\n";
    if(payment5==1900)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l15;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent5==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam5;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id5;
    cout<<"\n\n";
    l16:
    cout<<"\t PAY YOUR PAYMENT (2400) ..";
    cin>>payment5;
    cout<<"\n\n";
    if(payment5==2400)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l16;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent5==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren5;	
	}// **************** else statment  end 	
	break;	
	}// **************** case 5 statment  end 
	
	
		case 6:// **************** case 6 statment  start
	{
	system("color 5");
	ren6:
	string nam6,id6;
	int rent6,payment6;
	system("cls");
    cout<<"\t\t ********* \n";
    cout<<"\t\t MERCIDIES \n";
    cout<<"\t\t ********* \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.500 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.2200 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.2800 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent6;
    if(rent6==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam6;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id6;
    cout<<"\n\n";
    l17:
    cout<<"\t PAY YOUR PAYMENT (500) ..";
    cin>>payment6;
    cout<<"\n\n";
    if(payment6==500)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l17;
		
	}
	
	}// **************** if statment  end 
	else if(rent6==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam6;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id6;
    cout<<"\n\n";
    l18:
    cout<<"\t PAY YOUR PAYMENT (2200) ..";
    cin>>payment6;
    cout<<"\n\n";
    if(payment6==2200)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l18;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent6==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam6;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id6;
    cout<<"\n\n";
    l19:
    cout<<"\t PAY YOUR PAYMENT (2800) ..";
    cin>>payment6;
    cout<<"\n\n";
    if(payment6==2800)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l19;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent6==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren6;	
	}// **************** else statment  end 	
	break;	
	}// **************** case 6 statment  end 
	
	
	
	case 7:// **************** case 7 statment  start 
	{
	system("color 5");
    ren7:
	string nam7,id7;
	int rent7,payment7;
	system("cls");
    cout<<"\t\t ********** \n";
    cout<<"\t\t HIGH SPEED \n";
    cout<<"\t\t ********** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.50 \n\n";
    cout<<"\t 2 HOUR [12]  Rs.500 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.900 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent7;
    if(rent7==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam7;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id7;
    cout<<"\n\n";
    l20:
    cout<<"\t PAY YOUR PAYMENT (50) ..";
    cin>>payment7;
    cout<<"\n\n";
    if(payment7==50)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l20;
		
	}
	
	}// **************** if statment  end 
	else if(rent7==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam7;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id7;
    cout<<"\n\n";
    l21:
    cout<<"\t PAY YOUR PAYMENT (500) ..";
    cin>>payment7;
    cout<<"\n\n";
    if(payment7==500)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l21;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent7==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam7;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id7;
    cout<<"\n\n";
    l22:
    cout<<"\t PAY YOUR PAYMENT (900) ..";
    cin>>payment7;
    cout<<"\n\n";
    if(payment7==900)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l22;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent7==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren7;	
	}//	***** else statment  end 
	break;	
    }// **************** case 7 statment  end
    
    
		case 8:// **************** case 8 statment  start 
	{
	system("color 6");
	ren8:
	string nam8,id8;
	int rent8,payment8;
	system("cls");
    cout<<"\t\t *********** \n";
    cout<<"\t\t HONDA (125) \n";
    cout<<"\t\t *********** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.100\n\n";
    cout<<"\t 2 HOUR [12]  Rs.700 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.1200 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent8;
    if(rent8==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam8;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id8;
    cout<<"\n\n";
    l23:
    cout<<"\t PAY YOUR PAYMENT (100) ..";
    cin>>payment8;
    cout<<"\n\n";
    if(payment8==100)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l23;
		
	}
	
	}// **************** if statment  end 
	else if(rent8==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam8;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id8;
    cout<<"\n\n";
    l24:
    cout<<"\t PAY YOUR PAYMENT (700) ..";
    cin>>payment8;
    cout<<"\n\n";
    if(payment8==700)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l24;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent8==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam8;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id8;
    cout<<"\n\n";
    l25:
    cout<<"\t PAY YOUR PAYMENT (1200) ..";
    cin>>payment8;
    cout<<"\n\n";
    if(payment8==1200)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l25;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent8==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren8;
			

	}// **************** else part  end  
		break;	 
   }// **************** case 8 end  
   
   
	case 9:
	{
	system("color 4");
	ren9:
	string nam9,id9;
	int rent9,payment9;
	system("cls");
    cout<<"\t\t ********** \n";
    cout<<"\t\t YAMAHA YBR \n";
    cout<<"\t\t ********** \n\n\n";
    cout<<"\t 1 HOUR [1]   Rs.150\n\n";
    cout<<"\t 2 HOUR [12]  Rs.900 \n\n";
    cout<<"\t 3 HOUR [24]  Rs.1600 \n\n";
    cout<<"\t 4 Exit \n\n";
    cout<<"\t SELECT OPTION PLEASE [1 to 4]..";
    cin>>rent9;
    if(rent9==1)
    {
    system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam9;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id9;
    cout<<"\n\n";
    l26:
    cout<<"\t PAY YOUR PAYMENT (150) ..";
    cin>>payment9;
    cout<<"\n\n";
    if(payment9==150)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l26;
		
	}
	
	}// **************** if statment  end 
	else if(rent9==2)
	{
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam9;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id9;
    cout<<"\n\n";
    l27:
    cout<<"\t PAY YOUR PAYMENT (900) ..";
    cin>>payment9;
    cout<<"\n\n";
    if(payment9==900)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l27;
	}
		
	}// **************** else if 2 statment  end 
	
	else if(rent9==3)
	{
	
	system("cls");
    cout<<"\n\t ENTER YOUR NAME ";
    cin>>nam9;
    cout<<"\n\n";
    cout<<"\t ENTER YOUR ID CARD NUMBER ";
    cin>>id9;
    cout<<"\n\n";
    l28:
    cout<<"\t PAY YOUR PAYMENT (1600) ..";
    cin>>payment9;
    cout<<"\n\n";
    if(payment9==1600)
    {
    cout<<"\t PAYMENT SUCCESSFULL PRESS [ANY KEY]..";
    getch();
    goto rent;
	}
	else
	{
	cout<<"\t PLEASE CHECK YOUR PAYMENT \n\n";
	goto l28;
		
	}
		
	}// **************** else if 3 statment  end 
	
	else if(rent9==4)
	{
		
		
	}// **************** else if 4 statment  end 
	
	else 
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t INVILED OPTION PRESS [ANY KEY]..";
	getch();
	goto ren9;
			
	 
	}// **************** else part  end  
	break;		
	}
	
		case 10:
	{

	main_menu();	
	break;
	}
	
	default :
	{
	system("color 6");
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n \t\t INVILED OPPTION PRESS [ANY KEY]..";
	getch();
	goto rent;	
	break;	
	}
		
	}//******************* switch brecket end //
	
	
}//******************* function rent difinition  end // 


void display()//******************************(  DISPLAY FUNCTION START )
{
	system("color 2");
	cout<<"\t\t\t *************************** \n";
	cout<<"\t\t\t \fWELCOME TO HONDA COMPANEY\f \n";
    cout<<"\t\t\t *************************** \n\n\n\n";
	cout<<"\t\t ISTITUDE TEAM \t CEER \n\n";
	cout<<"\t\t ORGANIZED BY  \t ALI & MURTAZA \n\n\n\n";
	cout<<"\t\t PRESS [ANY KEY] FOR MAIN MENU..";
	getch();
}
//******************************( display function end )




//******************************( loading function start )
void loading()
{
	for(int j=0;j<100;j++)
	{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n  \t\t\t LOADING PLEASE wait "<<j;
	system("cls");
	system("color 9");
for(int i=0;i<1000000;i++)
	{
		
	}
	
    }
}
//******************************( loading function end )
