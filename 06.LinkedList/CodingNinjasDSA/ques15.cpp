// Merge Two soerted LL
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
Node *mergeLL(Node *head1,Node *head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    if(head1->data > head2->data)  std::swap(head1,head2);
    Node *res=head1;
    while(head1!=NULL && head2!=NULL){
        Node *temp=NULL;
        while(head1!=NULL && head1->data <= head2->data){
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        std::swap(head1,head2);
    }
    return res;
}