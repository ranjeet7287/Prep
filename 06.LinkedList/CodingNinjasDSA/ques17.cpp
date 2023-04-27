// Find index of Node by Recursively
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
    if(head==NULL){
        return -1;
    }
    if(head->data==n){
        return 0;
    }
    int small=findNode(head->next,n);
    if(small==-1){
        return -1;
    }
    return 1+small;    
}