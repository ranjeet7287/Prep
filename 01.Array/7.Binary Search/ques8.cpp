// Searching in a Nearally Sorted Array
#include<bits/stdc++.h>
using namespace std;
int NearlySortArray(int *arr,int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[(mid-1+n)%n]==x){
            return mid-1;
        }else if(arr[(mid+1)%n]==x){
            return mid+1;
        }else if(arr[mid]>x){
            end=mid-2;
        }else{
            start=mid+2;
        }
    }
    return -1;
}