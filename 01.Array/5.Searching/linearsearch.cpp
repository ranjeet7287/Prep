#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int *arr,int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<LinearSearch(arr,n,x);
    delete[]arr;
}