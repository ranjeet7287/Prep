// Desending Sorted Array
// 10 9 8 7 6 5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;
int SearchDSA(int *arr,int n,int x)
{
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+(end-start)/2);
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }    
}