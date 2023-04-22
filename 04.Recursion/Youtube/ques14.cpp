// Generate all Balanced Parenthesis
#include<bits/stdc++.h>
using namespace std;
void Solve(int open,int close,string output,vector<string> &v){
    if(open==0 && close==0){
        v.push_back(output);
        return;
    }
    if(open!=0){
        string op1=output;
        op1.push_back('(');
        Solve(open-1,close,op1,v);
    }
    if(close>open){
        string op2=output;
        op2.push_back(')');
        Solve(open,close-1,op2,v);
    }
    return;
}
vector<string> AllBalancedParenthesis(int n){
    vector<string> v;
    int open=n,close=n;
    string output="";
    Solve(open,close,output,v);
}