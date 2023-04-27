// Check Middle Node of LL
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
// int middleNode(Node *head){
//     if(head==NULL){
//         return -1;
//     }
//     Node *temp=head;
//     int length=1;
//     while(temp->next!=NULL){
//         length++;
//         temp=temp->next;
//     }
//     int mid=(length/2)+1;
//     while(mid>=1 && temp!=NULL){
//         temp=temp->next;
//         mid--;
//     }
//     return temp->data;
// }

int middleElement(Node *head){
    if(head==NULL){
        return -1;
    }
    Node *slow=head;
    Node *fast=head;
    while(slow->next!=NULL &&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}