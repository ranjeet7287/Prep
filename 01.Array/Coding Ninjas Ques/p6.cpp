#include<bits/stdc++.h>
using namespace std;
// 0(n^2)
int PairSum(int *arr,int n,int s){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            if(arr[i]+arr[j]==s){
                count++;
            }
        }
    }
    return count;
}
