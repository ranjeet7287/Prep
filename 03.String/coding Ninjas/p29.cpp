#include<bits/stdc++.h>
using namespace std;
int longest(string str){
    int i=0,j=0;
    int maxi=INT_MIN;
    int count=0;
    unordered_map<char,int> map;
    map.clear(); 
    while(j<str.size()){
        map[str[j]]++;
        if(map.size()==j-i+1){
            maxi=max(maxi,j-i+1);
            j++;
        }else if(map.size()<j-i+1){
            while(map.size()<j-i+1){
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
    cout<<longest(str);
}