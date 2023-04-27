// Find a Node in Linked List (return it's index)
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

int findNode(Node *head,int n){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==n){
            return count;
        }
        count++;
        temp=temp->next;
    }
    return -1;
}