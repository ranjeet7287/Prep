// Nearest Greater in left
#include<bits/stdc++.h>
using namespace std;
vector<int> largestLeft(vector<int> *arr){
    vector<int> v;
    stack<int> s;
    for(int i=0;i<=arr.size();i++){
        if(s.size()==0){
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
        s.push(arr.at(i));
    }
    return v;
}