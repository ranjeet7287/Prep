// Insert at Node at ith postion
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
Node *insert(Node *head,int data,int i){
    Node *temp=head;
    // Craeting a newnode with given data
    Node *newnode=new Node(data);
    int count=0;
    // i==0
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
Node *takeInput(){
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
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}