// Merge Sort
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
Node *middleElement(Node *head){
    if(head==NULL){
        return head;
    }
    Node *slow=head;
    Node *fast=head;
    while(slow->next!=NULL &&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node *mergeSortedLL(Node *head1,Node *head2){
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

Node *mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL){
        return head;
    }
    Node *mid = midPoint(head);
    Node *h1 = head;
    Node *h2 = mid->next;
    mid->next = NULL;
    h1 = mergeSort(h1);
    h2 = mergeSort(h2);
    Node *finalHead = mergeSortedLL(h1, h2);
    return finalHead;
	//Write your code here
}