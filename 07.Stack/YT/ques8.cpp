#include<bits/stdc++.h>
using namespace std;
int Trapwater(int *arr,int n){
    // left preffix
    int lmax[n];
    lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        int temp=max(lmax[i-1],arr[i]);
        lmax[i]=temp;
    }
    // right suffix
    int rmax[n];
    rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        int temp=max(rmax[i+1],arr[i]);
        rmax[i]=temp;
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        water=water+(min(lmax[i],rmax[i])-arr[i]);
    }
    return water;
}