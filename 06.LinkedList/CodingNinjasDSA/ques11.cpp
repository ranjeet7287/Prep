// Eliminate duplicates from  Sorted LL

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node *remove(Node *head){
    if(head==NULL){
        return head;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node *a=temp->next;
            temp->next=a->next;
            delete a;
        }else{
            temp=temp->next;
        }
    }
    return head;
}