// Aggressive Cows
#include<bits/stdc++.h>
using namespace std;
bool CanPlaceCows(int *arr,int n,int cows,int mid){
    int cord=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]-cord >=mid){
            count++;
            cord=arr[i];
        }
        if(count==cows){
            return true;
        }
    }
    return false;
}

int AggressiveCow(int *arr,int n,int cows){
    int start=1;
    int end=arr[n-1]-arr[0];
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(CanPlaceCows(arr,n,cows,mid)==true){
            res=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return res;
}