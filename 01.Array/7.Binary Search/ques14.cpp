// Peak Element @Amozon @Google
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
