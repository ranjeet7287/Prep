#include<bits/stdc++.h>
using namespace std;
void MergeTwoSorted(int *arr1,int n1,int *arr2,int n2,int *ans){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }else{
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        ans[k]=arr1[i];
        k++;
        i++;
    }
    while(j<n2){
        ans[k]=arr2[j];
        k++;
        j++;
    }
}