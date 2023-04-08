// How Many time is sorted array rotated
#include<bits/stdc++.h>
using namespace std;
// int SortRotated(int *arr,int n)
// {
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         int prev=(mid+n-1)%n;
//         int next=(mid+1)%n;
//         if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]){
//             return mid;
//         }
//         if(arr[start]<=arr[mid]){
//             start=mid+1;    
//         }else if(arr[mid]<=arr[end]){
//             end=mid-1;
//         }
//     }
// }

// leet code 153
class Solution {
public:
  int findMin(vector<int>& arr){
    int start=0;
    int n=arr.size();
    int end=n-1;
    if(arr[end]>=arr[0]){
      return arr[0];
    }
    while(start<=end){
      int mid=start+(end-start)/2;
      if(arr[mid]<=arr[(mid+n-1)%n]){
        return arr[mid];
      }else if(arr[mid]>=arr[0]){
        start=mid+1;
      }else{
        end=mid-1;
      }
    }
    return 0;
  }
};