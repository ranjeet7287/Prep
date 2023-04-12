#include <bits/stdc++.h> 
using namespace std;
string shortestSubstring(string str){
    int n=str.size();
    unordered_map<char,int> map;
    // Occurance of Character
    for(int i=0;i<n;i++){
        map[str[i]]++;
    }
    int k=map.size();
    map.clear();
    int j=0;
    int ans=INT_MAX;
    int start;
    int end;
    for(int i=0;i<n;i++){
        // small cal
        map[str[i]]++;
        if(map.size()==k){
            while(map[str[j]]>1){
                map[str[j]]--;
                j++;
            }

            if(ans>i-j+1){
                ans=i-j+1;
                start=j;
                end=i;
            }
        }
    }
    return str.substr(start,end-start+1);
}