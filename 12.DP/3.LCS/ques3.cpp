// PRINT LCS(Longest Common Subsequence)
#include<bits/stdc++.h>
using namespace std;

string LCS(string x,string y,int n,int m){
    string ans;
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }
    int i=m,j=n;
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            ans.push_back(x[i-1]);
            i--;
            j--;
        }else{
            if(t[i][j-1]>t[i-1][j]){
                j--;
            }else{
                i--;
            }
        }
    }
    return ans;
}
