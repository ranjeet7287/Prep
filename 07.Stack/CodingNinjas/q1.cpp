// Maximum Size Rectangle Sub-matrix With All 1's
//https://www.codingninjas.com/codestudio/problems/maximum-size-rectangle-sub-matrix-with-all-1-s_893017?leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;
vector<int> NearesetSmallerLeft(vector<int> &arr){
    vector<int> vleft;
    stack<pair<int,int>> s;
    int pseudoindex=-1;
    for(int i=0;i<=arr.size()-1;i++){
        if(s.size()==0){
            vleft.push_back(pseudoindex);
        }else if(s.size()>0 && s.top().first<arr.at(i)){
            vleft.push_back(s.top().second);
        }else if(s.size()>0 && s.top().first>=arr.at(i)){
            while(s.size()>0 && s.top().first>=arr.at(i)){
                s.pop();
            }
            if(s.size()==0){
                vleft.push_back(pseudoindex);
            }else{
                vleft.push_back(s.top().second);
            }
        }
        s.push({arr.at(i),i});
    }
    return vleft;
}
vector<int> NearesetSmallerRight(vector<int> &arr){
    vector<int> vright;
    stack<pair<int,int>> s;
    int pseudoindex=arr.size();
    for(int i=arr.size()-1;i>=0;i--){
        if(s.size()==0){
            vright.push_back(pseudoindex);
        }else if(s.size()>0 && s.top().first<arr.at(i)){
            vright.push_back(s.top().second);
        }else if(s.size()>0 && s.top().first>=arr.at(i)){
            while(s.size()>0 && s.top().first>=arr.at(i)){
                s.pop();
            }
            if(s.size()==0){
                vright.push_back(pseudoindex);
            }else{
                vright.push_back(s.top().second);
            }
        }
        s.push({arr.at(i),i});
    }
    reverse(vright.begin(),vright.end());
    return vright;
}
int MAH(vector<int> &arr){
    vector<int> left=NearesetSmallerLeft(arr);
    vector<int> right=NearesetSmallerRight(arr);
    vector<int> widht;
    for(int i=0;i<arr.size();i++){
        widht.push_back((right[i]-left[i]-1)*arr[i]);
    }
    int ans=*max_element(widht.begin(),widht.end());
    return ans;
}

int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &matrix, int row, int col){
	int ans=0;
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			if(i>0) {
				matrix[i][j]=(matrix[i][j]==1?matrix[i-1][j]+1:0);
			}
		}
		ans=max(ans,MAH(matrix[i]));
	}
	return ans;
}