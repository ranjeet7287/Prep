#include <bits/stdc++.h> 
using namespace std;
string findUncommonCharacters(string s1, string s2)
{
    vector<bool> hash_A(26,false);
    vector<bool> hash_B(26,false);

//    for(char ch:s1){
//     hash_A[ch-'a']=true;
//    }
//    for(char ch:s2){
//     hash_B[ch-'a']=true;
//    }
    for(int i=0;i<s1.size();i++){
        hash_A[s1.at(i)-'a']=true;
    }
    for(int i=0;i<s2.size();i++){
        hash_B[s2.at(i)-'a']=true;
    }
   string ans;
   for(int i=0;i<26;i++){
    if(hash_A[i]^hash_B[i] !=0){
        ans.push_back('a'+i);
    }
   }
   if (ans.empty()){
    return -1;
   }else{
    return ans;
   }
}