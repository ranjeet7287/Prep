// In this question we will learn who we can take input from the user and print in LL in Simple Approch 0(N^2)
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
Node *takeinput(){
    int data;
    cin>>data;
    // Creating a HEAD pointer 
    Node *head=NULL;
    // -1 as terminator of taking input
    while(data!=-1){
        // Sataically makeing a Node is a wrong way becouse they de-allocate itself So we use Dynamically Make a node
        Node *newnode=new Node(data);
        // first time we need to intailize with head pointer
        // head -> Node newnode
        if(head==NULL){
            head=newnode;
        }else{
            Node *temp=head;
            // trversing from head to tail
            while(temp!=NULL){
                temp=temp->next;
            }
            // Here we are connecting our node
            temp->next=newnode;
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