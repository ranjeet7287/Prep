// Subset Sum Problem
#include<bits/stdc++.h>
using namespace std;

int SubsetSum(int *arr,int n,int sum){
    bool static t[n+1][sum+1];
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

    if(arr[n-1]=)


}

int  main(){



}