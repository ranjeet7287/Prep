// Nearset Greater to Right (Next Largest Element)
// https://www.codingninjas.com/codestudio/problems/next-greater-element_670312?leftPanelTab=0
#include<bits/stdc++.h>
using namespace std;
vector<int> NextLargest(vector<int> &arr){
    vector<int> v;
    stack<int> s;
    for(int i=arr.size()-1;i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
        }else if(s.size()>0 && s.top()>arr.at(i)){
            v.push_back(s.top());
        }else if(s.size()>0 && s.top()<=arr.at(i)){
            while(s.size()>0 && s.top()<=arr.at(i)){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]); 
    }
    reverse(v.begin(), v.end());
    return v;
}