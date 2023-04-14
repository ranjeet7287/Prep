// First  Index

#include<bits/stdc++.h>
using namespace std;
int firstIndex(int *arr,int n,int c){
    if(n==0){
        return -1;
    }
    if(arr[0]==c){
        return 0;
    }
    int small=firstIndex(arr+1,n-1,c);
    if(small=-1){
        return-1;
    }else{
        return small+1;
    }
}

// Last Index
int LastIndex(int *arr,int n,int x)
{
    if(n==0){
        return -1;
    }
    int small=LastIndex(arr+1,n-1,x);
    if(small==-1){
        if(arr[0]==x){
            return 0;
        }else{
            return -1;
        }
    }else{
        return small+1;
    }
}

// All Index
int AllIndex(int *arr,int n,int x,int *output){
    if(n==0){
        return 0;
    }
    int small=AllIndex(arr,n-1,x,output);
    if(arr[n-1]==x){
        output[small]=n-1;
        small++;
    }
}