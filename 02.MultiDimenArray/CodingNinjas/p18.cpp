#include<bits/stdc++.h>
using namespace std;

// 0(N^2)
int getMedian(vector<vector<int>> &matrix){
    int n=matrix.size();
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans.push_back(matrix[i][j]);
        }
    }
    sort(ans.begin(),ans.end);
    return ans.at(n/2);
}
// optimal sol
int getMedian(vector<vector<int>> &matrix)
{
    int start=INT_MAX;
    int end=INT_MIN;
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        start=min(start,matrix[i][0]);
        end=max(end,matrix[i][m-1]);
    }
    int midpos=(n*m+1)/2;
    while(start<=end){
        int mid=start+(end-start)/2;
        int count=0;
        for(int i=0;i<n;i++){
            int index=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            count+=index;
        }
        if(count<midpos){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return start;
}
