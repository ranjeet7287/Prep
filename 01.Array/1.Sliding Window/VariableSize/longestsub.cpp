// Variable Subarry of sum k
// Given an array containing N positive integers and an integer K.
// Your task is to find the length of the longest Sub-Array with sum of the elements equal to the given value K.

// For Input:
// 1
// 7 5
// 4 1 1 1 2 3 5
// your output is: 
// 4 . 
#include<bits/stdc++.h>
using namespace std;
int longestSubArr(int *arr,int n,int k)
{
    int i=0,j=0;
    int sum=0;
    int maxSize=INT_MIN;
    while(j<n)
    {
        sum=sum+arr[j];
        if(sum<k){
            j++;
        }else if(sum==k){
            maxSize=max(maxSize,j-i+1);
            j++;
        }else if(sum>k){
            while(sum>k){
                sum=sum-arr[i];
                i++;    
            }
            j++;
        }
    }
    return maxSize;
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestSubArr(arr,n,sum);
    delete[]arr;
    return 0;
}
/*
Will the discussed approach work with negative numbers in the array?
A. No. 
Because let's say in the given array [4,1,1,1,2,3,5] when we found the sum within
the window to be greater than the desired value 5 (i=0, j=2 -> [4,1,1]), we started
reducing the size of the window by doing i++. Here we assumed that once the sum of
elements within the window becomes greater than 5 then increasing the window size
will just add to the sum and hence we will not attain the sum 5 again.
This is true when all the element are positive and hence reducing the window size by doing i++ makes sense. 
But this might not be true if array also contains negative numbers. Consider the array [4,1,1,-2,1,5], 
here we would have found the sum to be greater than 5 for i=0, j=2 and if we would
have now started reducing the window size by doing i++, we would have missed the potential subarray (i=0, j=4).
In short, the discussed approach will not work with array having negative numbers.
*/