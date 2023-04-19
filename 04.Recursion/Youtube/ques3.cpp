// Sort array
#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &arr,int temp){
    if(arr.size()==0 || arr[arr.size()-1]<=temp){
        arr.push_back(temp);
        return;
    }
    int val=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);
    return;
}
void Sort(vector<int> &arr){
    // Base Case
    if(arr.size()<=1){
        return;
    }
    // last element
    int temp=arr[arr.size()-1];
    arr.pop_back();
    Sort(arr);
    insert(arr,temp);
    return;
}