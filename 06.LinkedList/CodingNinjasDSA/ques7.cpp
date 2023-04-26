// Delete a node
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
// TAKE INPUT
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1){
        Node *newnode=new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}
// Print 
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
// Insert Node
Node *insert(Node *head,int data,int i){
    Node *temp=head;
    Node *newnode=new Node(data);
    int count=0;

    if(i==0 && temp!=NULL){
        newnode->next=temp;
        temp=newnode;
        return temp;
    }
    while(count<i-1 && temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(temp!=NULL){
        Node *a=temp->next;
        temp->next=newnode;
        newnode->next=a;
    }
    return temp;
}

// Delelte Node 
Node *DeleteNode(Node *head,int data,int i){
    Node *temp=head;
    if(temp==NULL){
        return temp;
    }
    if(i==0){
        Node *a=temp;
        temp=a->next;
        delete a;
        return temp;
    }
    int count=0;
    while(count<i-1 && temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(temp!=NULL && temp->next!=NULL){
        Node *a=temp->next;
        temp->next=a->next;
        delete a;
    }
    return temp;
}
