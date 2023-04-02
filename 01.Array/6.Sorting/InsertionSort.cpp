#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        for(int j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=current;
    }
}