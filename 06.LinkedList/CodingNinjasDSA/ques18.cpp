// Even after Odd LinkedList
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
Node *evenAfterOdd(Node *head){
    Node *temp=head;
    if(temp==NULL || temp->next==NULL){
        return temp;
    }
    Node *odd_h=NULL;
    Node *odd_t=NULL;
    Node *even_h=NULL;
    Node *even_t=NULL;
    while(temp!=NULL){
        //Odd Data
        if(temp->data%2!=0){
            if(odd_h==NULL){
                odd_h=temp;
                odd_t=temp;
            }else{
                odd_t->next=temp;
                odd_t=odd_t->next;
            }
        }else{
            // Even Data
            if(even_h==NULL){
                even_h=temp;
                even_t=temp;
            }else{
                even_t->next=temp;
                even_t=even_t->next;
            }
        }
        temp=temp->next;
    }
    if(odd_h==NULL){
        return even_h;
    }else{
        // connecting to odd  tail to even haed
        odd_t->next=even_h;
    }
    if(even_h!=NULL){
        even_t->next=NULL;
    }
    return odd_h;
}