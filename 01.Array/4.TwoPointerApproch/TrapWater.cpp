#include<bits/stdc++.h>
using namespace std;
// O(n^2)
int TrapWater(int *arr,int n)
{
    int water=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[i];
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,arr[j]);
        }
        water=water+(min(lmax,rmax)-arr[i]);
    }
    return water;
}
int Trapwater(int *arr,int n)
{
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
int main()
{

}