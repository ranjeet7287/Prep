// Order Agnostic Search
// Simple hai Order tho hai par pata nhi konsa hai bs phale usko identify karo 
// or binary search laga doo
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+(end-start)/2);
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int SearchDSA(int *arr,int n,int x)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+(end-start)/2);
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }    
}
int AgnosticSearch(int *arr,int n,int x){
    if(n==1 && arr[0]==x){
        return 0; 
    }else if(arr[0]<arr[1]){
        return BinarySearch(arr,n,x);
    }else{
        return SearchDSA(arr,n,x);
    }
}