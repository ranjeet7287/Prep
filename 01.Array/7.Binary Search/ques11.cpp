// Find the Postion of an Element in an Infinte Sorted Array
#include<bits/stdc++.h>
using namespace std;
int Postion(int *arr,int x)
{
    int start=0;
    int end=1;
    while(x>arr[end]){
        start=end;
        end=end*2;
    }
    while(start<=end){
        int mid=start+(end-start);   
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