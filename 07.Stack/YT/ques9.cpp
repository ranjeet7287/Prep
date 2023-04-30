// Min Stack with extra space
#include<bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> ss;
void push(int a){
    s.push(a);
    if(ss.size()==0 || ss.top()>=a){
        ss.push(a);
        return;
    }
}
int top(){
    if(s.size()==0){
        return -1;
    }
    int ans=s.top();
    s.pop();
    if(ss.top()==ans){
        ss.pop();
    }
    return ans;
}
int getMin(){
    if(ss.size()==0){
        return -1;
    }
    return ss.top();
}