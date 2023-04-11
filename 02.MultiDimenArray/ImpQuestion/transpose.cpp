#include<bits/stdc++.h>
using namespace std;
void Transpose(vector<vector<int,int> matrix,int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}