// Queue using array
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
    Queue(int size){
        data=new T[size];
        nextIndex=-1;
        firstIndex=0;
        size=0;
        capacity=size;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    // insert element
    void insert(T element){
        if(size==capacity){
            cout<<"queue is full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1){
            firstIndex=0;
        }
        size++;
    }
    T front(){
        if(firstIndex==-1){
            return -1;
        }
        return data[firstIndex];
    }
    T dequeue(){
        if(isEmpty()){
            return 0;
        }
        T ans=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0){
            firstIndex==-1;
            nextIndex=0;
        }
        return ans;
    }
};