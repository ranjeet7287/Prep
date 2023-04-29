// Maximum Area of Histogram
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
int MaxArea(vector<int> &arr){
    vector<int> left=NearesetSmallerLeft(arr);
    vector<int> right=NearesetSmallerRight(arr);
    vector<int> widht;
    for(int i=0;i<arr.size();i++){
        widht.push_back((right[i]-left[i]-1)*arr[i]);
    }
    int ans=*max_element(widht.begin(),widht.end());
    return ans;
}