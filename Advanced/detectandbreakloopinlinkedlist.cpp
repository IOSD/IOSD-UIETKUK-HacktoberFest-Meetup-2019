//DETECT AND BREAK THE LOOP IN LINKED LIST

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node *getNode(int val)
{
	Node *temp=new Node;
	temp->data=val;
	temp->next=NULL;
	return temp;
}

Node* insert(Node *head,int pq,int val)
{
	Node *temp=getNode(val);
	if(head==NULL)
		head=temp;
	else
	{
		Node *curr=head;
		while(curr->next!=NULL)
			curr=curr->next;
		curr->next=temp;
	}
	if(pq!=-1)
	{
		Node *curr=head;
		while(curr->next!=NULL)
		{
			if(curr->data==pq)
			{
				temp->next=curr;
				break;
			}
			else
				curr=curr->next;
		}
	}
	return head;
}
void detect_and_remove_loop(Node *head)
{
	if(head==NULL || head->next==NULL)
		return;
	int u=0;
	Node *slow=head;
	Node *fast=head;
	do
	{
		slow=slow->next;
		if(fast->next!=NULL)
			fast=fast->next->next;
		//cout<<slow->data<<" "<<fast->data<<endl;
		if(slow==fast)
		{
			u=1;
			cout<<"Loop Detected!"<<endl;
			break;
		}
	}while(slow!=fast && slow!=NULL && fast!=NULL);
	if(u==0)
	{
		cout<<"Loop not Present!"<<endl;
		return;
	}
	else
	{
		slow=head;
		while(fast->next!=slow->next)
		{
			slow=slow->next;
			fast=fast->next;
		}
		fast->next=NULL;
	}
	cout<<"Loop Removed!"<<endl;
}
int main()
{
	Node *head=NULL;
	int i=1;
	while(i<9)
	{								//if we need to make a loop just put the data of node to where last node is to be connected instead of -1
		head=insert(head,-1,i);
		i++;
	}
	head=insert(head,5,9);
	detect_and_remove_loop(head);
	cout<<"The linked list looks like: "<<endl;
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	return 0;
}
