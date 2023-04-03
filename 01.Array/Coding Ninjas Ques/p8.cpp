#include<bits/stdc++.h>
using namespace std;

int getpivot(int *arr,int n)
{
    int start=0;
    int end=n-1;
    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            mid=mid;
        }
    }
    return end;
}
int BinarySearch(int *arr,int s,int e,int x){
    int start=s;
    int end=e;
    while(start<=end){
        int mid=(start+end)/2;
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
int search(int *arr,int n,int key){
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
       return BinarySearch(arr, pivot, n-1,key);
    }else{
      return BinarySearch(arr,0,pivot,key);
    }
}