// Balanced Parenrhesis
#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string s){
    stack<char> open;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            open.push(s[i]);
        }else if(s[i]==')'){
            if(open.empty()){
                return false;
            }else if(open.top()=='('){
                open.pop();
            }else{
                return false;
            }
        }
    }
    return (open.empty()?true:false);
}
int main(){
    string s;
    cin>>s;
    cout<<(isBalanced(s)) ? "true" : "false";
}