#include<bits/stdc++.h>
using namespace std;
int power(int x,int n )
{
    // Base Case
    if(n==0){
        return 1;
    }
    // Small Cal and Hypothesis
    return x*power(x,n-1);
}