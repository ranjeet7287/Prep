// Insert and Delete Node by Recursion
#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


Node *insertNode(Node *head,int data,int i){
    if(head==NULL){
        return 0;
    }
    if(i==0){
        Node *newnode=new Node(data);
        newnode->next=head;
        head=newnode;
        return head;
    }else{
        head->next=insertNode(head->next,data,i-1);
        return head;
    }
}
Node *deleteNode(Node *head,int i){
    if(head==NULL){
        return head;
    }
    if(i==0){
        Node *temp=head->next;
        delete(head);
        return temp;
    }else{
        head->next=deleteNode(head->next,i-1);
        return head;
    }
}
Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}