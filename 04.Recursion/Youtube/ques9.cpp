// Subset
#include<bits/stdc++.h>
using namespace std;
void Subset(string input,string output){
    if(input.length()==0){
        cout<<output<<" ";
        return;
    }
    string op1=output;
    string op2=output.push_back(input[0]);
    input.erase(input.begin()+0);
    Subset(input,op1);
    Subset(input,op2);
}