#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int last=0;
    int ans=0;
    while(n!=0){
        last=n%10;
        ans=ans+(last*i);
        i=i*2;
        n=n/10;
    }
    cout<<ans;
}