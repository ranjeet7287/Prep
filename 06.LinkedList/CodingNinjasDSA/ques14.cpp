// Check Palindrome LL
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}; 
Node *RerverseLL(Node *head){
    Node *temp=NULL;
    Node *next=NULL;
    while(head!=NULL){
        next=head->next;
        head->next=temp;
        temp=head;
        head=next;
    }
    return temp; 
}
bool isPalindrome(Node *head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    Node *slow=head;
    Node *fast=head;
    
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    slow->next=RerverseLL(slow->next);
    slow=slow->next;
    while(slow!=NULL){
        if(head->data!=slow->data){
            return false;
        }
        head=head->next;
        slow=slow->next;
    }
    return true;
}