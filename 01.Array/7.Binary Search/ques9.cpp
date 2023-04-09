// Find of an element in a sorted array
#include<bits/stdc++.h>
using namespace std;
int findfloor(int *arr,int n,int x)
{
    int start=0;
    int end=n-1;
    int res=INT_MIN;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return arr[mid];
        }else if(arr[mid]<x){
            res=arr[mid];
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return res;
}
int findCeil(int *arr,int n,int x)
{
    int start=0;
    int end=n-1;
    int res=INT_MAX;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return arr[mid];
        }else if(arr[mid]<x){
            start=mid+1;
        }else{
            res=arr[mid];
            end=mid-1;
        }
    }
    return res;
}