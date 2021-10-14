#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
int main() {
	// your code goes here
	node *temp=0,*head=0;
	bool condition=true;
	int total_element=0;
	while(condition)
	{
	    node *new_node=0;
	    new_node=new node();
	    cin>>new_node->data;
	    new_node->next=0;
	    if(head==0)
	    {
	        head=new_node;
	        temp=new_node;
	    }
	    else
	    {
	        temp->next=new_node;
	        temp=new_node;
	    }
	    cin>>condition;
	    total_element++;
	}
	cout<<endl;
	cout<<total_element<<endl;
	///////////////////////  Asking For Position in linked likst to insert a value 
	int pos;
	cin>>pos;
	if(pos<=total_element)
	{
	    
    	int i=2;
    	node *temp2=0;
    	temp2=head;
    	while(i<=pos)
    	{
    	    i++;
    	    temp2=temp2->next;
    	}
    	node *adding_node;
    	adding_node=new node();
    	cin>>adding_node->data;
    	adding_node->next=temp2->next;
    	temp2->next=adding_node;
    	
    	temp=head;
        while(temp!=0)
    	{
    	    cout<<temp->data<<"->";
    	    temp=temp->next;
    	}
	}
	else
	{
	    cout<<"position OverFlow the Linked List";
	}
	return 0;
}