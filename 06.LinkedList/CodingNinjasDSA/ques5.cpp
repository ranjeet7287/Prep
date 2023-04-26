// Print ith Node in LL (Toffe Approch)
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
void PintIthNode(Node *head ,int i){
    Node *temp=head;
    if(temp==NULL){
        return;
    }
    int count=0;
    while(count<i && temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(temp!=NULL){
        cout<<temp->data<<endl;
    }
}