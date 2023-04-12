#include <bits/stdc++.h> 
using namespace std;
vector<int> findAnagramsIndices(string s, string p, int n, int m){
    int k = p.length();
    int i = 0;
    int j = 0;
    vector<int> res;
    unordered_map<char, int> m1;
    for (auto x : p){
        m1[x]++;
    }
    unordered_map<char, int> m2;
    while (j < n){
        m2[s[j]]++;
        if((j-i+1)<k){
          j++;
        }else if ((j-i+1)== k) {
            if (m1==m2) {
            res.push_back(i);
          }
          m2[s[i]]--;
          if (m2[s[i]] == 0) {
            m2.erase(s[i]);
          }
          i++;
          j++;
        }
    }
    return res;
}