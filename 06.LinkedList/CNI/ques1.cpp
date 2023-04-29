// Sort an Linked List (Merge Sort)(T->0(n*log(n))  S->0(log(N)) )
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
Node *midpoint(Node *head){
    if(head==NULL){
        return head;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node *merge(Node *h1,Node *h2){
    if(h1==NULL) return h2;
    if(h2==NULL) return h1;
    if(h1->data >= h2->data) std::swap(h1,h2);
    Node *res=h1;
    while(h1!=NULL && h2!=NULL){
        Node *temp=NULL;
        while(h1!=NULL && h1->data<=h2->data){
            temp=h1;
            h1=h1->next;
        }
        temp->next=h2;
        std::swap(h1,h2);
    }
    return res;
}
Node *mergeSort(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *mid=midpoint(head);
    Node *h1=head;
    Node *h2=mid->next;
    mid->next=NULL;
    h1=mergeSort(h1);
    h2=mergeSort(h2);
    Node *finalHead=merge(h1,h2);
    return finalHead;
}