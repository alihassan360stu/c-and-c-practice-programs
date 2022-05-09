#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    struct student
    {
		char name[20];
		char fName[20];
		int CNo;
		float GPA;
    };
    struct records
    {
		student s1, s2;
    };
    records file = {{"Khushal","Muhammad Isaac",14,3.52},{"Mashal","Muhammad Joseph",4, 3.4}};
    
    cout<<"Show Record of Class No : ";
    cin>>num;
    if (num ==14)
    {
        cout<<"Name : "<<file.s1.name<<endl;
        cout<<"Father Name : "<<file.s1.fName<<endl;
        cout<<"Class No : "<<file.s1.CNo<<endl;
        cout<<"GPA : "<<file.s1.GPA<<endl;
    }
    else if(num == 1)
    {
        cout<<"Name : "<<file.s2.name<<endl;
        cout<<"Father Name : "<<file.s2.fName<<endl;
        cout<<"Class No : "<<file.s2.CNo<<endl;
        cout<<"GPA : "<<file.s2.GPA<<endl;
    }
    getch();
}
