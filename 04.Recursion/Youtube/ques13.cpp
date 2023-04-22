// Letter Case Permutation
#include<bits/stdc++.h>
using namespace std;
void Solve(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    //if digit
    if(!isalpha(input[0])){
        Solve(input.erase(input.begin()+0),output.push_back(input[0]));
    }
    // lower case
    string op1=output.push_back(tolower(input[0]));
    // upper case
    string op2=output.push_back(toupper(input[0]));
    input.erase(input.begin()+0);
    Solve(input,op1);
    Solve(input,op2);
    return;
}