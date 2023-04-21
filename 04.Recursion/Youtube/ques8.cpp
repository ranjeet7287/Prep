// Tower Of Hanoi
#include<bits/stdc++.h>
using namespace std;
void TOH(int n,int source,int helper,int dest){
    if(n==0){
        return;
    }
    TOH(n-1,source,dest,helper);
    cout<<source<<" "<<dest<<endl;
    TOH(n-1,helper,source,dest);
}