// Stack using Dynamic Array
#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *data;
    int nextIndex;
    int capacity;

    public:
    Stack(){
        data=new int[5];
        nextIndex=0;
        capacity=5;
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return nextIndex==0;
    }

    void push(int element){
        if(nextIndex==capacity){
            int *newarr=new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newarr[i]=data[i];
            }
            delete[]data;
            data=newarr;
            capacity*=2;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        nextIndex--;
    }

    int top(){
        if(isEmpty()){
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};