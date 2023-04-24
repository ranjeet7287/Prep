// Print Permutation
#include <iostream>
#include <string>
using namespace std;
void permutations(string input, string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++){
        string inp1=input.substr(0,i)+input.substr(i+1);
        string op1=output+input[i];
        permutations(inp1,op1);
    }
}

void printPermutations(string input)
{
    string output=""; 
    permutations(input, output);
}
