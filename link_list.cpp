
#include<iostream>
using namespace std;
class link_list{
         public:
		struct node{
		int data;
		node* add;
		node *back_add;	
		};// there is a setting of link_list and decleration parts //
		node *head,*tail,*left;
			link_list()
			{
				head=tail=left=NULL;
			}// this is constructrer used for assigment null to head and tail//
		void data_insert(int);// data_inset function meani to insert data to link list //
		void display();// display function used to display link list data //
		void searching (int search);
		void deletion (int);
		void reverse ();
};
void link_list::data_insert(int data1)// insert function defenation mean create node operation
{
	node* new_node= new node;
	new_node->data=data1;
	new_node->back_add=NULL;
	new_node->add=NULL;
	
	
	if(head==NULL)// this if statment is used to assined new_node address to head and tail//
	{
		head=tail=left=new_node;
	}
	else {
		while(tail->add!=NULL)
		{
		
//	left=tail->add;
//	left->back_add=tail;
		tail=tail->add;
		}
		tail->add=new_node;
		left=new_node;
		left->back_add=tail;
	}
	
} // insert data function end mean data is set as a linklist//
void link_list :: display()
{
	node *display=head;
	int i=0;
	cout<<"\n\n\n\n\n";
	while(display!=NULL)
	{    i++;
		cout<<"\t"<<i<<" node is "<<display->data<<"\n\n";
		display=display->add;
	}
}
void link_list :: searching(int search)
    {
	node *sea=head;
	int check=0;
	int i=0;
		while(sea!=NULL)
		{i++;
			if(sea->data==search)
			{
				cout<<"\n\n data found in "<<i<< " no node "<<sea->data;
				sea=NULL;
				check++;
			}
			sea=sea->add;
		}
		if(check==0)
		{
			cout<<"\n\ndata not found in link list ";
		}
	
}

void link_list :: reverse()
{
node *reverse1=left;
//cout<<"\n\n left datad is = "<<left->add->data;	
cout<<"\n\n\n\n reverse order ";
while(reverse1!=NULL)
{
	cout<<"\n reverse is "<<reverse1->data;
	reverse1=reverse1->back_add;
}
}

int main()
{
link_list node_list;
for(int i=0;i<7;i++)
{
node_list.data_insert(i+2);	
}
node_list.display();
//node_list.searching(45);	
node_list.reverse();
}