#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    int binary=0,rem=0,product=1;
    while(n!=0){
        rem=n%2;
        binary=binary+(rem*product);
        product*=10;
        n=n/10;
    }
    cout<<binary;
    return 0;
}