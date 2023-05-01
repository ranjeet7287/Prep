// Queue using Linked List
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
class Queue{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(T element){
        Node<T> *newnode=new Node<T>(element);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
        size++;
    }
    void dequeue(){
        isEmpty(){
            return;
        }
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
    }    
    T front(){
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};