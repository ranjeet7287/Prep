//Find Element in a sorted Array
#include<bits/stdc++.h>
using namespace std;
int BS(vector<int> &arr,int start,int end,int x){
while(start<=end){
    int mid=start+(end-start)/2;
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
int findmin(vector<int> &arr){
int n=arr.size();
int start=0;
int end=n-1;
while(start<=end){
    int mid=start+(end-start)/2;
    int prev=(mid-1+n)%n;
    int next=(mid+1)%n;
    if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
    return mid;
    }else if(arr[mid]>=arr[0]){
    start=mid+1;
    }else{
    end=mid-1;
    }
}
return 0;
}
int search(vector<int>& arr, int target) {
int n=arr.size();
int minindex=findmin(arr);
int a1=BS(arr,minindex,n-1,target);
int a2=BS(arr,0,minindex-1,target);
if(a1==-1){
    return a2;
}else{
    return a1;
}
}
