// kth Sybmol in Grammar
#include<bits/stdc++.h>
using namespace std;
int Solve(int n,int k)
{
    if(n==1 && k==1){
        return 0;
    }
    int len=pow(2,n-1);
    int mid=len/2;
    if(k<=mid){
        return Solve(n-1,k);
    }else{
        return !Solve(n-1,k-mid); // !->Complement
    }
}