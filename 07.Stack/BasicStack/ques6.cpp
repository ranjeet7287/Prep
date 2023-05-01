// Reverse a Stack 
#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int element){
    if(s.size()==0){
        s.push(element);
        return;
    }
    int temp=s.top();
    s.pop();
    insert(s,element);
    s.push(temp);
}
void solve(stack<int> &s,int element){
    if(s.size()<=1){
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s);
    insert(s,temp);
}
