// Range Update Query
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> RangeUpdateQuery(int *arr,int n,int Q,int L,int R)
{
    vector<int> ans;
    // step 1 -> Make a Diffrence Array
    for(int i=0;i<n+1;i++){
        ans.push_back(0);
    }
    for(int i=0;i<n+1;i++){
        if(i==0){
            ans[i]=arr[i];
        }else{
            ans[i]=arr[i]-arr[i-1];
        }
    }
    // step 2 -> We have to update our Range [L,R] BY number of queries(Q)
    ans[L]=ans[L]+Q;
    ans[R+1]=ans[R+1]-Q;

    // Step 3 -> Prefix Sum
    for(int i=0;i<n;i++){
        if(i==0){
            ans[i]=arr[i];
        }else{
            ans[i]=arr[i]+arr[i-1];
            arr[i]=arr[i]+arr[i-1];
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
    int Q;
    int L,R;
    cin>>Q>>L>>R;
    vector<int> ans=RangeUpdateQuery(arr,n,Q,L,R);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i);
    }
    delete[]arr;
}*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d[n+1];
    for (int i = 0; i <= n; i++){
        if  (i == 0){
            d[i] = arr[i];
        }
        else{
            d[i] = arr[i]-arr[i-1];
        }
    }
    // we have created a difference array 
    int l;
    int r;
    cout<<"enter the range you want to perform operation"<<endl;
    cin>>l>>r;

    int value;
    cout<<"enter the value"<<endl;
    cin>> value;

    d[l] = d[l]+value;
    d[r+1] = d[r+1]-value;
    
    //now query is updated
    // find the prefix sum array of difference array 
    cout<<"The updated array"<<endl;
    for(int i = 0; i < n; i++)  {
        if(i==0){
            arr[i] = d[i];
            cout<<arr[i]<<" ";
        }
        else{
            arr[i] = d[i]+d[i-1];
            d[i] = d[i]+d[i-1];
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}