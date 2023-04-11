// Inplace Rotate Matrix 90 Degree 
#include<bits/stdc++.h>
using namespace std;
void Inpalace(vector<vector<int,int>> arr)
{
    // Transpose
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // rotateing first and last row
    for(int i=0;i<n;i++){
        int start=0;
        int end=n-1;
        while(start<=end){
            swap(arr[start][i],arr[end][i]);
            start++;
            end--;
        }
    } 
}