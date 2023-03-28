/*
Check if we can partition the array into two subarray into two subarray with
equal sum. More formally, Check that the prefix sum of a part of the array is 
equal to the suffix sum of rest of the array.

Explanation - >
arr[]=[1,2,2,3,2];
    [1,2,2]==[3,2]
    sum is 5 of subarr1  == sum is 5 of subarr2 

*/
#include<bits/stdc++.h>
using namespace std;
bool checkPrefixSuffixSum(vector<int> &arr)
{
    int totalsum=0;
    for(int i=0;i<arr.size();i++){
        totalsum=totalsum+arr[i];
    }
    int prefixsum=0;
    for(int i=0;i<arr.size();i++){
        prefixsum+=arr[i];
        int suffixsum=totalsum-prefixsum;
        if(suffixsum==prefixsum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<checkPrefixSuffixSum(arr)<<endl;
    return 0;
}