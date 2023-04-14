// Print 1 To N
#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<" ";
}
// N to 1
void print(int n)
{
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    print(n-1);
}