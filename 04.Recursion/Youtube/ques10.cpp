// Print unique subset string
#include<bits/stdc++.h>
using namespace std;
set<string> UniqueSubset(string input,string output){
    set<string> map;
    if(input.length()==0){
        map.insert(output);
    }
    string op1=output;
    string op2=output.push_back(input[0]);
    input.erase(input.begin()+0);
    UniqueSubset(input,op1);
    UniqueSubset(input,op2);
    return map;
}