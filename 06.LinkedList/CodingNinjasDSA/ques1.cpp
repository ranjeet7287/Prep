// Who to intalize Linked List in Statically and Dynamically
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    // Constructor
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
int main()
{
    // Statically
    Node n1(1);
    // Storeing the address of first node into head
    Node *head=&n1;
    Node n2(2);
    // Connecting two Nodes
    n1.next=&n2;


    // Dynamically
    Node *n3=new Node(3);
    Node *head=&n3;
    Node *n4=new Node(4);
    // Connecting two Nodes
    n3->next=n4;
}