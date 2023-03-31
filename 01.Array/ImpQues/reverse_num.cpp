#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(n!=0){
        i=i*10+n%10;
        n=n/10;
    }
    cout<<i;
}