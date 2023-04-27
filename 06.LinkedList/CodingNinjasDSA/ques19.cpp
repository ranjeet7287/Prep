// skip M node and Delete N node
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
Node *skipMdeleteN(Node *head,int M,int N){
    if(head==NULL){
        return head;
    }
    if(M==0 && N!=0){
        return NULL;
    }
    if(N==0){
        return head;
    }
    Node *temp=head;
    Node *prev=NULL;
    while(temp!=NULL){
        int count1=1;
        int count2=1;
        while(M>=count1 && temp!=NULL){
            prev=temp;
            temp=temp->next;
            count1++;
        }
        while(N>=count2 && temp!=NULL){
            Node *del=temp;
            delete temp;
            temp=del->next;
            count2++;
        }
        prev->next=temp;
    }
    return head;
}