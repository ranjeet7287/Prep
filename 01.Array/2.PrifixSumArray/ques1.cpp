// Prfix Sum of array
// arr[]=[1,2,3,4,5]
// ans[]=[1,3,6,10,15]
// explanation -- > ans[0]=arr[0], ans[1]=arr[0]+arr[1],ans[2]=arr[0]+arr[1]+arr[2]...
#include<bits/stdc++.h>
using namespace std;
vector<int> PrfixSum(int *arr,int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(i==0){
            ans.push_back(arr[i]);
        }else{
            ans.push_back(arr[i]+ans[i-1]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=PrfixSum(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    delete[]arr;
    return 0;
}