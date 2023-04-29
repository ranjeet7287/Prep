// Stock Span
#include<bits/stdc++.h>
using namespace std;
vector<int> StockSpan(vector<int> &arr){
    vector<int> v;
    stack<pair<int,int>> s;
    for(int i=0;i<=arr.size()-1;i++){
        if(s.size()==0){
            v.push_back(-1);
        }else if(s.size()>0 && s.top().first >arr.at(i)){
            v.push_back(s.top().second);
        }else if(s.size()>0 && s.top().first <=arr.at(i)){
            while(s.size()>0 && s.top().first <=arr.at(i)){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr.at(i),i});
    }
    for(int i=0;i<v.size();i++){
        v[i]=i-v[i];
    }
    return v;
}