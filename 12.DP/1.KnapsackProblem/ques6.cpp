//Count the number of subset with a given difference

#include<bits/stdc++.h>
using namespace std;

int CountSubset(int *arr,int n,int sum){
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
                t[i][j]=0;
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }    
    if(arr[n-1]<=sum){
        t[n][sum]=t[n-1][sum-arr[n-1]] + t[n-1][sum];
    }else{
        t[n][sum]=t[n-1][sum];
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}


int CountSubDiff(int *arr,int n,int diff){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s1=diff+sum/2;
    return CountSubset(arr,n,s1);
}