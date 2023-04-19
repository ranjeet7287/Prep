// Delete Middle Element in Stack
#include<bits/stdc++.h>
using namespace std;
void Slove(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    Slove(s,k-1);
    s.push(temp);
    return;
}
stack<int> DelelteMES(stack<int> &s){
    if(s.size()==0){
        return s;
    }
    int k=s.size()/2+1;
    Slove(s,k);
    return s;
}