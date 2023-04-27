// Revrese LL
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
void RevreseLL(Node *head){
    if(head==NULL){
        return;
    }
    RevreseLL(head->next);
    cout<<head->data<<" ";
}