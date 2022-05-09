#include<iostream>
using namespace std;

	//           string varable                   //
	
	//*******************************************//
	string name,father_name,address,college_name,contect;
	//*******************************************//

//              integer type vareable            //

	//******************************************//
	int age,matric_marks,percentage;
	//******************************************//

	void present(void)
{
	cout<<" Enter your good name  ";
	cin>>name;
	
	cout<<"Enter you father name  ";
	cin>>father_name;
	cout<<" Enter your address   ";
	cin>>address;
	
	cout<<"Enter your college name  ";
	cin>>college_name;
	
	//start integer varable//
	cout<<"Enter your age  ";
	cin>>age;
	
	cout<<" Enter your contect number  ";
	cin>>contect;
	
	cout<<"Enter your matrics marks  ";
	cin>>matric_marks;
	
	cout<<"Enter your toral percentage  ";
	cin>>percentage;
	cout<<"\n\n";
	cout<<"\t\t detail \n\n";
	cout<<name<<endl<<father_name<<endl<<address<<endl<<college_name<<endl<<contect<<endl<<age<<endl<<matric_marks<<endl<<percentage<<endl;
}
int main()
{
	present ();
}
