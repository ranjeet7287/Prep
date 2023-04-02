#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int *arr,int n)
{
    for(int i=0;i<n;i++){
        int start=i;
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                start=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[start];
        arr[start]=temp;
    }
}