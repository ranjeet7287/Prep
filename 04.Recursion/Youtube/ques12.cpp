//Permutation with case change
// I/P -> ab       // O/P --> ab,aB,Ab,AB 
#include<bits/stdc++.h>
using namespace std;
void PCC(string input,string output)
{
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    // small
    string op1=output.push_back(input[0]);
    // Captial
    string op2=output.push_back(toupper(input[0]));
    input.erase(input.begin()+0);
    PCC(input,op1);
    PCC(input,op2);
    return;
}