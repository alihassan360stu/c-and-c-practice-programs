#include<stdio.h>
#include<iostream>
//ADDRESS BOOK::



#include<stdlib.h>
#include<conio.h>
//#include<alloc.h>
#include<string.h>
using namespace std;
struct entry
{
char name[50];
char nick[50];
char email[50];
char address[50];
char city[50];
char cont[50];
char pin[50];
struct entry *lptr;
struct entry *rptr;
}*temp,*newe,*l,*r;
typedef struct entry *list;
void newentry();
void display(char n[50]);
void deletentry(char n[50]);
void displayall();
void makempty();
int isempty();
void saventry();
void loadentry();
void deleteall();
void newentry()
{
char a[50],b[50],f[50],g[50],c[50],d[50],e[50];
int i,k=0;
cout<<"Enter the Datas for the New Entry = "<<endl;
cout<<"name = ";
cin>>a;
cout<<"Nick name :";
cin>>b;
cout<<"E-mail ID :";
cin>>c;
cout<<"Address   :";
cin>>d;
cout<<"City      :";
cin>>e;
cout<<"Contact No:";
cin>>f;
cout<<"Pincode   :";
cin>>g;
newe=(struct entry*)malloc(sizeof(struct entry));
for(i=0;i<50;i++)
{
newe->name[i]=' ';
newe->nick[i]=' ';
newe->email[i]=' ';
newe->address[i]=' ';
newe->city[i]=' ';
newe->cont[i]=' ';
newe->pin[i]=' ';
}
for(i=0;i<50;i++)
{
newe->name[i]=a[i];
newe->nick[i]=b[i];
newe->email[i]=c[i];
newe->address[i]=d[i];
newe->city[i]=e[i];
newe->cont[i]=f[i];
newe->pin[i]=g[i];
}
if(isempty())
{
newe->lptr=newe->rptr=NULL;
l=r=newe;
cout<<"Your Entry is Added :";
}
else
 {
	 temp=l;
	 while(temp!=NULL)
  {
	  i=stricmp(newe->name,temp->name);
	 if(i<0)
	 break;
	 else if(i>0)
	  temp=temp->rptr;
	  else if(i==0)
	 {
		cout<<"Name Already Exists.Entry cannot be Added";
	  k=1;
	  break;
	 }
	}
	 if(k!=1)
	 {
		if(temp==l)
	{
	  newe->lptr=NULL;
	  newe->rptr=l;
	  l->lptr=newe;
	  l=newe;
	  cout<<"Your Entry is Added";
	 }
	 else if(temp==NULL)
	{
	  newe->rptr=NULL;
	  newe->lptr=r;
	  r->rptr=newe;
	  r=newe;
	  cout<<"Your Entry is Added";
	 }
	 else
	{
	newe->rptr=temp;
	newe->lptr=temp->lptr;
	temp->lptr=newe;
	(newe->lptr)->rptr=newe;
	cout<<"Your Entry is Added";
	}
  }
  }
}

void displayall()
{       int n=1;
if(!isempty())
{
temp=l;
while(temp!=NULL)
{
cout<<"Name      :"<<temp->name<<endl;
cout<<"Nick Name :"<<temp->nick<<endl;
cout<<"E-mail ID :"<<temp->email<<endl;
cout<<"address:"<<temp->address<<endl;
cout<<"City   :"<<temp->city<<endl;
cout<<"Contact.No:"<<temp->cont<<endl;
cout<<"Pin code:"<<temp->pin<<endl;
temp=temp->rptr;
n++;
}
}
else
cout<<"Address Book is Empty";
}

void deletentry(char n[50])
{
int i;
if(isempty())
cout<<"Address  Book is Empty ";
else{
temp=l;
while(temp!=NULL)
{
i=stricmp(temp->name,n);
if(i==NULL)
{
if(l==r)
{
l=r=NULL;
cout<<"Entry deleted";
break;
}
else if(temp==l)
  {
  l=l->rptr;
  l->lptr=NULL;
  cout<<"Entry deleted";
  break;
  }
else if(temp==r)
{
r=r->lptr;
r->rptr=NULL;
cout<<"Entry deleted";
break;
}
else{
(temp->lptr)->rptr=temp->rptr;
(temp->rptr)->lptr=temp->lptr;
cout<<"Entry deleted";
break;
}
}
temp=temp->rptr;

}
if(temp==NULL)
cout<<"Not Found";
}
}
int isempty()
{
return l==NULL;
}

void makempty()
{
l=r=NULL;
cout<<"Address Book is Emptied";
}





void display(char n[50])
{
int i,p=1;
if(isempty())
cout<<"Address Book is Empty";
else
{
temp=l;
while(temp!=NULL)
{
i=stricmp(temp->name,n);
if(i==NULL)
{if(p==1)
cout<<"Entry is found in "<<p<<"position";
 else if(p==2)
 cout<<"Entry is found in "<<p<<"position";
 else if (p==3)
 cout<<"Entry is found in "<<p<<"position";
 else
cout<<"Entry is found in "<<p<<"position";
cout<<"Name   :"<<temp->name <<endl;
cout<<"  Nick Name :"<<temp->nick<<endl;
cout<<"E-mail ID :"<<temp->email<<endl;
cout<<"address :"<<temp->address<<endl;
cout<<" City :"<<temp->city<<endl;
cout<<"Contact.No :"<<temp->cont<<endl;
cout<<"pin code :"<<temp->pin<<endl;


break;
}
temp=temp->rptr;
p++;
}
if(temp==NULL)
cout<<"Entry Not Found";

}
}






int main()
{
int l=1,m;

char n[50];
while(l!=8)
{
clrscr();


cout<<"********************************************************************************#------------------------MINI PROJECT-SIMPLE ADDRESSBOOK----------------------#********************************************************************************";
cout<<"Enter Your Choice";
cout<<"";
cout<<1<<"-New Entry";
cout<<"";
cout<<2<<"-Display an Entry";
cout<<"";
cout<<3<<"-Delete an Entry";
cout<<"";
cout<<4<<"-Display all Entries";
cout<<"";
cout<<5<<"-Empty the book";
cout<<"";
cout<<6<<"-Save Entry";
cout<<"";
cout<<7<<"-Load Entries";
cout<<"";
cout<<8<<"-Delete All Saved Files";
cout<<"";
cout<<9<<"-End";
cout<<"";
cout<<"********************************************************************************";
cout<<"";
cin>>l;
switch(l)
{
case 1:

newentry();
getch();
break;
case 2:

cout<<"Enter the Name of the Person to Display";
cout<<"";
scanf("%s",&n);
display(n);
getch();
break;
case 3:

cprintf("Enter the Name of the Person to Delete");
printf("");
cin>>n;
deletentry(n);
getch();
break;
case 4:

displayall();
getch();
break;
case 5:

makempty();
getch();
break;
case 6:

saventry();
getch();
break;
case 7:

loadentry();
getch();
break;
case 8:

deleteall();
getch();
break;
case 9:

cout<<"Program Ends Here.Thank You!!!";
cout<<"";
getch();
break;
default:

cout<<"Enter a Valid Choice from 1-9 only";
cout<<"";
getch();
break;
}
}
getch();
}
void saventry()
{
char n[50];
int c;
cout<<"Enter the Name of the Person = ";
cin>>n;
list t;
if(isempty())
cout<<"Address Book is Empty";
else
{
FILE *f;
f=fopen("entry.c","a");
int i;t=l;
while(t!=NULL)
{
i=stricmp(t->name,n);
if(i==0)
{
cout<<t->name<<endl;
cout<<t->nick<<endl;
cout<<t->email<<endl;
cout<<t->address<<endl;
cout<<t->city<<endl;
cout<<t->cont<<endl;
cout<<t->pin<<endl;
cout<<"Your Entry Saved";
cout<<"Add Another Entry? (1-yes/2-no)";
cin>>c;
if(c==1)
saventry();
else if(c==2)
break;
}
t=t->rptr;

}
fclose(f);
if(t==NULL)
cout<<"Entry Not Found";
}

}
void loadentry()
{
int i=1;
list t;
FILE *f;
       f=fopen("entry.c","r");
	if(f==NULL)
	{
	cout<<"Cannot Open";
	exit(1);
	}
	while(fscanf(f," %s %s %s %s %s %s %s",t->name,t->nick,t->email,t->address,t->city,t->cont,t->pin)!=EOF)
       {	
           printf("[%d]	Name      :%s	Nick Name :%s	E-mail ID:%s	address   :%s	City     :%s	Contact.No:%s	Pin code:%s",i,t->name,t->nick,t->email,t->address,t->city,t->cont,t->pin);
	i++;}
	fclose(f);
	}


	void deleteall()
	{
	FILE *f;
	f=fopen("entry.c","w");
	fclose(f);
	cout<<"all saved files were delete";
	}
