// Maximum of all Subarray of size k 
#include<bits/stdc++.h>
using namespace std;
vector<int> MaxAllSubarr(int *arr,int n,int k)
{
    vector<int> ans;
    int i=0,j=0;
    queue<int> pq;
    while(j<n)
    {
        // cal
        if(pq.empty()){
            pq.push(arr[j]);
        }else{
            while(!pq.empty()&& pq.front()<arr[j]){
                pq.pop();
                pq.push(arr[j]);
            }
        }
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            //cal
            ans.push_back(pq.front());
            if(arr[i]==pq.front()){
                pq.pop();
            }
            i++;
            j++;        
        }
    }
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans=MaxAllSubarr(arr,n,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    delete[]arr;
    return 0; 
}