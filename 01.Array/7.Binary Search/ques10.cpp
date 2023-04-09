// Next Letter // leetcode 744
#include<bits/stdc++.h>
using namespace std;
int NextLetter(char *arr,int n,char x){
    int start=0;
    int end=n-1;
    char nextChar='#';
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            start=mid+1;
        }else if(arr[mid]>x){
            nextChar=arr[mid];
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    if(nextChar=='#'){
        return arr[0];
    }
    return nextChar;
}