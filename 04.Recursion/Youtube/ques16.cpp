// Josephus Problem
#include<bits/stdc++.h>
using namespace std;
int Solve(vector<int> &arr,int k,int index){
    if(arr.size()==1){
        return arr[0];
    }
    index=(index+k)%arr.size();
    arr.erase(arr.begin()+index);
    Solve(arr,k,index);
}
int main(){
    int n,k;
    cin>>n,k;
    vector<int> arr;
    for(int i=1;i<=n;k++){
        arr.push_back(i);
    }
    k--;
    int index=0;
    cout<<Solve(arr,k,index);
}