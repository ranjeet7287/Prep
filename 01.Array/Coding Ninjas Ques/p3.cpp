#include<bits/stdc++.h>
using namespace std;

int filpsBits(int *arr,int n){
    int ans=0;
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else{
            count1++;
            count0--;
        }
        ans=max(ans,count0);
    }
    return ans+count1;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<filpsBits(arr,n);
}