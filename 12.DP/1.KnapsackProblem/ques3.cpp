// Equal Sum Partition
#include<bits/stdc++.h>
using namespace std;
bool SubsetSum(int *arr,int n,int sum){
    bool  t[n+1][sum+1];
    // Intailizeing 
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=false;
            }
            if(j==0){
                t[i][j]=true;
            }
        }
    }

    if(arr[n-1]<=sum){
        t[n][sum]=t[n-1][sum-arr[n-1]] || t[n-1][sum];
    }else{
        t[n][sum]=t[n-1][sum];
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}
bool EqualSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2==0){
        return SubsetSum(arr,n,sum/2);
    }else{
        return false;
    }
}