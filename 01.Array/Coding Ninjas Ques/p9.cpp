#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>nums, int n) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(int i=0; i<n-1; i++){
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    output.push_back({nums[i], nums[low], nums[high]});
                    int tempIndex1 = low, tempIndex2 = high;
                    while(low < high && nums[low] == nums[tempIndex1]) low++;
                    while(low < high && nums[high] == nums[tempIndex2]) high--;
                }
            }
            while(i+1 < n && nums[i] == nums[i+1]) i++;
        }
    return output;
}
int Triplets(int *arr,int n)
{
    sort(arr.begin(),arr.end());
    int count=0;
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            if(arr[i]+arr[low]+arr[high]<0){
                low++;
            }else if(arr[i]+arr[low]+arr[high]>0){
                high++;
            }else{
                count++;
                int tempIndex1 = low, tempIndex2 = high;
                // Avoiding rep
                while(low < high && nums[low] == nums[tempIndex1]) {
                    low++;
                }
                while(low < high && nums[high] == nums[tempIndex2]){
                    high--;
                }
            }
        }
        while(i+1 < n && nums[i] == nums[i+1]){ 
            i++;
        }
    }
}