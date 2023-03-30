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
            cout<<s;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}