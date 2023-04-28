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
class Pair{
    public:
    Node *head;
    Node *tail;
};
Pair reverseLL(Node *head){
    if(head==NULL ||head->next==NULL){
        Pair ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    Pair samllans=reverseLL(head->next);
    smallans.tail->next=head;
    head->next=NULL;
    Pair ans;
    ans.head=smallans.head;
    ans.tail=head;
    return ans;
}
Node *kRverse(Node *head,int k){
    if(head==NULL){
        return head;
    }
    if(k==0 || k==1){
        return head;
    }
    Node *temp=head;
    int count=0;
    while(temp!=NULL || count!=k-1){
        temp=temp->next;
        count++;
    }
    Node *head2=NULL;
    if(temp!=NULL){
        head2=temp->next;
        temp->next=NULL;
    }
    Node *newHead=kRverse(head2,k);
    Pair ans=reverseLL(head);
    ans.tail->next=newHead;
    return ans.head;
}