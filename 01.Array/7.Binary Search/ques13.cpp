//Minminum Diffrence Element in a sorted Array
#include<bits/stdc++.h>
using namespace std;
int Bs(int *arr,int n,int x)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            return arr[mid];
        }else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    int ans=min(abs(arr[start]-x),abs(arr[end]-x));
    return ans;
}