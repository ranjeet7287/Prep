#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i){
            cout<<j+i-1;
            j++;
        }
        j=i-1;
        while(j>=1){
            cout<<j+i-1;
            j--;
        }
        cout<<endl;
        i++;
    }
}