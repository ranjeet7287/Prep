#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char s='A'+i-1;
        while(j<=i){
            char v=s+j-1;
            cout<<v;
            j++; 
        }
        cout<<endl;
        i++;
    }
}