// find the index of 1st in a infinte Binary Sorted array.
#include<bits/stdc++.h>
using namespace std;
int fisrtIndexOne(int *arr)
{
    // find end index
    int start=0;
    int end=1;
    while(1>arr[end]){
        start=end;
        end=end*2;
    }
    int res=-1;
    // first occurance
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==1){
            res=mid;
            end=mid-1;
        }else if(arr[mid]>1){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return res;
}