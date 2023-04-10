#include<bits/stdc++.h>
using namespace std;
int PeakElement(int *arr,int n)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }else if(mid==0){
            if(arr[mid]>arr[mid+1]){
                return mid;
            }else{
                return mid+1;
            }
        }else if(mid==n-1){
            if(arr[mid]>arr[mid-1]){
                return mid;
            }else{
                return mid-1;
            }
        }
    }
    return -1;
}
int BinarySearch(int *arr,int start,int end){
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
int BinarySearchD(int *arr,int start,int end,int x){
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
    return -1;
}
int SearchinBitonic(int *arr,int n,int x)
{
    int maxindex=PeakElement(arr,n);
    int a1=BinarySearch(arr,0,maxindex-1,x);
    int a1=BinarySearch(arr,maxindex,n-1,x);
    if(a1==-1){
        return a2;
    }else{
        return a1;
    }
}