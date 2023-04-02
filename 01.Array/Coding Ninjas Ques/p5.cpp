#include<bits/stdc++.h>
using namespace std;
bool checkOverlapping(int *start,int *end,int n){
    vector<pair<int,int>> interval;
    for(int i=0;i<n;i++){
        interval.push_back({start[i]},{end[i]});
    }
    sort(interval.begin(),interval.end());
    for(int i=1;i<n;i++){
        if(interval[i].first<interval[i-1].second){
            return true;
        }
    }
    return false;
}