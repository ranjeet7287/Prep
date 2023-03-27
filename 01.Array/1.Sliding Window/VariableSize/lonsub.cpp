// Longest Substring k unique character
/*
Given a string you need to print the size of the longest possible substring that has exactly 
k unique characters.
Example:
Input:
2
aabacbebebe
3
aaaa
1
Output:
7
4 . */
#include<bits/stdc++.h>
using namespace std;
int longest(string str,int k){
    int i=0,j=0;
    int maxi=INT_MIN;
    int count=0;
    unordered_map<char,int> map;
    map.clear(); 
    while(j<str.size()){
        map[str[j]]++;
        if(map.size()<k){
            j++;
        }else if(map.size()==k){
            maxi=max(maxi,j-i+1);
            j++;
        }else if(map.size()>k){
            while(map.size()>k){
                map[str[i]]--;
                if(map[str[i]]==0){
                    map.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
}
int main()
{
    string str;
    cin>>str;
    int k;
    cin>>k;
    cout<<longest(str,k);
}