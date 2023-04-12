#include <bits/stdc++.h> 
using namespace std;
int getMinimumAnagramDifference(string &str1, string &str2)
{
    // EdgesCase
    if(str1==str2){
        return 0;
    }
    int freq[26]={0};
    // since size of both string are equal
    int n=str1.size();
    for(int i=0;i<n;i++){
        freq[str1[i]-'a']++;
        freq[str2[i]-'a']--;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            ans+=freq[i];
        }
    }
    return ans;
}