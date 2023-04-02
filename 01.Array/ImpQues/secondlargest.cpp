#include<bits/stdc++.h>
using namespace std;
int seclargest(int *arr,int n)
{
    if(n<=0){
        return INT_MIN;
    }
    int largest=arr[0];
    int seclargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }else if(arr[i]>seclargest && arr[i]!=largest){
            seclargest=arr[i];
        }
    }
    return seclargest;
}