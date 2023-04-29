// Nearest Smaller to right (Nearset Smaller Element)
#include<bits/stdc++.h>
using namespace std;
vector<int> NearesetSmaller(vector<int> &arr){
    vector<int> v;
    stack<int> s;
    for(int i=arr.size()-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);
        }else if(s.size()>0 && s.top()<arr.at(i)){
            v.push_back(s.top());
        }else if(s.size()>0 && s.top()>=arr.at(i)){
            while(s.size()>0 && s.top()>=arr.at(i)){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }else{
                v.push_back(s.top());
            }
        }
        s.push(arr.at(i));
    }
    reverse(v.begin(),v.end());
    return v;
}