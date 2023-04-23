// Print N-bit Binary number having more 1's than 0's for any prefix
#include<bits/stdc++.h>
using namespace std;
void Solve(int n,string output,int one,int zero){
    if(n==0){
        cout<<output<<endl;
        return;
    }
    // for choice 1's
    string op1=output;
    op1.push_back('1');
    Solve(n-1,op1,one+1,zero);
    if(one>zero){
        string op2=output;
        op2.push_back('0');
        Solve(n-1,op2,one,zero+1);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    string output="";
    int one=0;
    int zero=0;
    Solve(n,output,one,zero);
}