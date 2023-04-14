// Sum of an array
#include<bits/stdc++.h>
using namespace std;
int Sum(int *arr,int n){
    if(n==0){
        return 0;
    }
    // return arr[0]+Sum(arr+1,n-1);
    return Sum(arr,n-1)+arr[n-1];
}
// Check Number
bool Check(int *arr,int n,int x){
    if(n==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }
    Check(arr+1,n-1,x);
}