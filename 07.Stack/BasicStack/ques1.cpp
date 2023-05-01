// InBuilt Stack
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5); 
    cout<<S.top()<<endl; // 5
    cout<<S.size()<<endl; // 5 
    S.pop();
    cout<<S.top()<<endl; // 4
    cout<<S.size()<<endl; // 4 
}