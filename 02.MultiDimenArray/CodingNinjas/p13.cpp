#include<bits/stdc++.h>
using namespace std;
pair<int,int> SearchIn2D(vector<int> &matrix,int key){
    int n=matrix.size(); // row
    int m=matrix[0].size(); // col
    int i=0;
    int j=m-1;
    while(i>=0 && i<n && j>=0 && j<m){
        if(matrix[i][j]==key){
            return {i,j};
        }else if(matrix[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    return {-1,-1};
}