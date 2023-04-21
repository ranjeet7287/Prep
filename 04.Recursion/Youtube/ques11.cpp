// Permutation of Space 
#include<bits/stdc++.h>
using namespace std;
void PermutationSpace(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    // with space
    // string op1=output.push_back(' ');
    // string op1=output.push_back(input[0]);
    string op1=output.push_back(' '+input[0]);
    // without space
    string op2=output.push_back(input[0]);
    input.erase(input.begin()+0);
    PermutationSpace(input,op1);
    PermutationSpace(input,op2);
    return;
}
int main(){
    string input,output;
    cin>>input;
    output.push_back(input[0]);
    input.erase(input.begin()+0);
    PermutationSpace(input,output);
}