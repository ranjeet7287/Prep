// Implementing Stack by using Array
#include<bits/stdc++.h>
using namespace std;
class Stack{
    private:
    int *data;
    int nextIndex;
    int capacity;
    
    // Constructor 
    Stack(int size){
        this->data=new int[size];
        nextIndex=0;
        capacity=size;
    }

    // Functions
    // 1.Size Function
    int size(){
        return nextIndex;
    }

    // 2.Empty
    bool isEmpty(){
        return nextIndex==0;
    }

    // 3.Insert Method
    void push(int element){
        if(nextIndex==capacity){
            cout<<"Stack if full !!"<<endl;
            return ;
        }
    }

    // 4.Delete an Element
    void pop(){
        if(isEmpty()){
            return ;
        }
        nextIndex--;
    }

    //5.top
    int top(){
        if(isEmpty()){
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};