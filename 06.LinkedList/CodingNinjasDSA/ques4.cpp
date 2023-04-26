// Length of Linked List  
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

// Toffe Approch
int LenghtLL(Node *head){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

// Rescursive Approch
int lenght(Node *head){
    if(head==NULL){
        return 0;
    }
    return 1+lenght(head->next);
}