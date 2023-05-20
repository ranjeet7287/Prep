// Minimum Subset Sum Diff
#include<bits/stdc++.h>
using namespace std;


int SubsetSum(int *arr,int n,int sum){
    int  t[n+1][sum+1];
    // Intailizeing 
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
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    int ans = INT_MAX;
    //All the subset sum which is possible for this n sized array will have true value in table in nth row
    // Iterating last row where the sum exists
    // abs(sum - 2*(subset_sum) will give subset sum difference
    for(int j = 0; j<sum+1; j++){
        if(t[n][j] == 1) ans = min(ans, abs(sum - 2*j));
    }
    return ans;
}



int MinDiff(int *arr,int n){
    int sum=0;
    for(int i=0;i<n+1;i++){
        sum+=arr[i];
    }
    return SubsetSum(arr,n,sum);
}