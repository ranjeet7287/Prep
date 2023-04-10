// Alloacate of Pages @Filpkart @Amazon @Google 
#include<bits/stdc++.h>
using namespace std;
bool isValid(int *arr,int n,int key,int mid){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>mid){
            student++;
            sum=arr[i];
        }
        if(student>key){
            return false;
        }
    }
    return true;
}
int AloocatePage(int *arr,int n,int key)
{
    int start=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>start){
            start=arr[i];
        }
    }
    int end=0;
    for(int i=0;i<n;i++){
        end+=arr[i];
    }
    int res=-1;
    if(key>n){
        return -1; 
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,key,mid)==true){
            res=mid;
            end=mid-1;
        }else{
            start=mid+1; 
        }
    }
    return res;
}


/*
Related Problems For Practice :
Book Allocation Problem (GFG)
Aggressive cow (spoj)
Prata and roti (spoj)
EKO (spoj)
Google kickstart A Q-3 2020


/////////////////////////////////////////////////////////////////


More Good Binary Search Problems (Leetcode).
Good luck and have fun!

1539. Kth Missing Positive Number
1482. Minimum Number of Days to Make m Bouquets
1283. Find the Smallest Divisor Given a Threshold
1231. Divide Chocolate
1011. Capacity To Ship Packages In N Days
875. Koko Eating Bananas
774. Minimize Max Distance to Gas Station
410. Split Array Largest Sum
*/