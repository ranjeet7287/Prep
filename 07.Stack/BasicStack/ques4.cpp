// Stack Using  Linked List
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};
template<typename T>
class Stack{

    Node<T> *head;
    int size;

    public:
    Stack(){
        head=NULL;
        size=0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void push(int element){
        Node<T> *newnode=new Node<T>(element);
        newnode->next=head;
        head=newnode;
        size++;
    }

    void pop(){
        if(isEmpty()){
            return;
        }
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
    }

    T top(){
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};