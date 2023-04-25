#include<bits/stdc++.h>
using namespace std;
class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:
    DynamicArray(){
        data=new int[5];
        nextIndex=0;
        capacity=5;
    }

    // Add element
    DynamicArray(int element){
        if(nextIndex==capacity){
            int *newdata=new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
            delete[]data;
            data=newdata;
            capacity=2*capacity;
        }
        data[nextIndex]=element;
        nextIndex++;
    }

    // get element
    int get(int index)const{
        if(index<nextIndex){
            return data[index];
        }else{
            return -1;
        }
    }

    // Set Element
    void set(int index,int element){
        if(index<nextIndex){
            data[index]=element;
        }else if(index==nextIndex){
            add(element);
        }else{
            return;
        }
    }

    //print
    void print()const{
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }


    // Copy Constructor
    DynamicArray(DynamicArray const&d){

        // Shallow Copy
        // this->data=d.data;
        // this->capacity=d.capacity;
        // this->nextIndex=d.nextIndex;

        //  Deep Copy
        this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->capacity=d.capacity;
        this->nextIndex=d.nextIndex;
    }

    // Copy Assingment
    void operator=(DynamicArray const&d){
        this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->capacity=d.capacity;
        this->nextIndex=d.nextIndex;
    }
};