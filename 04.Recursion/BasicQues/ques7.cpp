#include<bits/stdc++.h>
using namespace std;
int GeomatricSum(int k)
{
    // Base Case
    if(k==0){
        return 1;
    }
    double small=GeomatricSum(k-1);
    return small+(1/(double)pow(2,k));
}
