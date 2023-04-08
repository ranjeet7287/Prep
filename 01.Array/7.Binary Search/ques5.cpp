// Count Element in a Sorted Array
// 2 4 10 10 10 18 20 
// search -> 10 no. of count is 3
#include<bits/stdc++.h>
using namespace std;
int firstOcurrance(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    int res=-1;
    while(start<=end){
        int mid=(start+(end-start)/2);
        if(arr[mid]==x){
            res=mid;
            end=mid-1;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return res;
}
int lastOcc(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    int res=-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            res=mid;
            start=mid+1;
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return res;
}
int countelement(int *arr,int n,int x)
{
    int lastindex=lastOcc(arr,n,x);
    int firstindex=firstOcurrance(arr,n,x);
    return (lastindex-firstindex)+1;
}