// Alloacate of Pages @Filpkart @Amazon @Google 
#include<bits/stdc++.h>
using namespace std;
bool isValid(int *arr,int n,int key,int mid){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>mid){
            student++;
            sum=arr[i];
        }
        if(student>key){
            return false;
        }
    }
    return true;
}
int AloocatePage(int *arr,int n,int key)
{
    int start=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>start){
            start=arr[i];
        }
    }
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int res=-1;
    if(key>n){
        return -1; 
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,key,mid)==true){
            res=mid;
            end=mid-1;
        }else{
            start=mid+1; 
        }
    }
    return res;
}


/*
Related Problems For Practice :
Book Allocation Problem (GFG)
Aggressive cow (spoj)
Prata and roti (spoj)
EKO (spoj)
Google kickstart A Q-3 2020
*/