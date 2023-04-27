//AppendLastNToFirst
#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
Node *appendtoLast(Node *head,int n){
    if(head==NULL || n==0){
        return head;
    }
    Node *temp=head;
    int lenght=1;
    while(temp->next!=NULL){
        lenght++;
        temp=temp->next;
    }
    temp->next=head;
    int len=lenght-n;
    while(len>=1  && temp!=NULL){
        temp=temp->next;
        len--;
    }
    Node *newnode=temp->next;
    temp->next=NULL; 
    return newnode;
}