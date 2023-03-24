// Maximum Sum SubArray of size k
#include<bits/stdc++.h>
using namespace std;
int maxsubarray(int *arr,int size,int k){
    int i=0,j=0, sum=0;
    int maxsum=INT_MIN;
    while(j<size){
        sum=sum+arr[j];
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            maxsum=max(maxsum,sum);
            sum=sum-arr[i];
            i++;
            j++;
        }
    }
    return maxsum;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxsubarray(arr,n,k);
    delete[]arr;
    return 0;
}