//  Find the missing and Duplicate numbers in an array.

#include<bits/stdc++.h>
using namespace std;
// Without Swap Sort
vector<int> findErrorNums(vector<int>& nums) {
        
    int missing;
    int duplicate;
    long long n = nums.size();
    long long sumofn = (n*(n+1))/2;
    long long arraysum=0 ;
    for(int i=0;i<n;i++)
        arraysum+=nums[i];
    long long ans1 = sumofn - arraysum;
    // ans1= missing duplcate; // --------------------
    long long squareofsumofn = n*(n+1)*(2*n+1)/6;
    long long squarearraysum=0;
    for(int i=0;i<n;i++)
    {
        squarearraysum+=nums[i]*nums[i];
    }
    // ans2 =  missing*missing - duplicate*duplicate;
    long long ans2 = squareofsumofn - squarearraysum;
    long long  ans3 = (squareofsumofn - squarearraysum)/(sumofn - arraysum);
    // ans3=  missing + duplicate ;   // ------------------
    duplicate =(ans3-ans1)/2;
    missing = (ans1+ans3)/2;
    return {duplicate,missing};    
}


// using SWAP SORT
pair<int,int> missingAndRepeating(vector<int> &arr, int n){
    
    // pre-processing
    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }else{
            i++;
        }
    }
    // obesrvation phase
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            return {i+1,arr[i]};
        }
    }

}