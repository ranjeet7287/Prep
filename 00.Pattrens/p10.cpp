#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char s='A'+n-i;
        while(j<=i){
            cout<<s;
            s++;
            j++;
        }
        cout<<endl;
        i++;
    }
}