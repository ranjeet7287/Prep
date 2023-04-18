#include<bits/stdc++.h>
using namespace std;
void merge(int *arr1,int s1,int *arr2,int s2,int *arr){
    int i=0,j=0,k=0;
    while(i<s1 && j<s2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
        }else{
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<s1){
        arr[k]=arr[i];
        i++;
        k++;
    }
    while(j<s2){
        arr[k]=arr2[j];
        j++;
        k++;
    }
}
void mergesort(int *arr,int n)
{
    // Base Case
    if(n<=1){
        return;
    }
    int mid=n/2;
    int size1=mid;
    int size2=n-mid;    
    int *arr1=new int[size1];
    int *arr2=new int[size2];
    for(int i=0;i<mid;i++){
        arr1[i]=arr[i];
    }
    int k=0;
    for(int j=mid;j<n;j++){
        arr2[k]=arr[j];
        k++;
    }
    delete[]arr1;
    delete[]arr2;
}