// You have been given a singly linked list of integers
//  along with two integers, 'i,' and 'j.' Swap the nodes that are present at 
// the 'i-th' and 'j-th' positions.
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
Node *swapNodes(Node *head,int i,int j){
    if(i==j || head==NULL){
        return head;
    }
    Node *p1=NULL;
    Node *p2=NULL;
    Node *c1=NULL;
    Node *c2=NULL;
    Node *temp=head;
    Node *prev=NULL;
    int count=0;
    while(temp!=NULL){
        if(count==i){
            c1=temp;
            p1=prev;
        }else if(count==j){
            c2=temp;
            p2=prev;
        }
        count++;
        prev=temp;
        temp=temp->next;
    }
    if(p1!=NULL){
        p1->next=c2;
    }else{
        head=c2;
    }
    if(p2!=NULL){
        p2->next=c1;
    }else{
        head=c1;
    }
    Node *a=c1->next;
    c1->next=c2->next;
    c2->next=a;
    return head;
}