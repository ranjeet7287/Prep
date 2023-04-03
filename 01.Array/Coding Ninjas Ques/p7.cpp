// sort 0 1
#include<bits/stdc++.h>
uaing namespace std;
void Sort01(int *arr,int n)
{
    int count0=0;
    for(int i=0;i<n;;i++){
        if(arr[i]==0){
            count0++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<n;i++){
        arr[i]=1;
    }
}