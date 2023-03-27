/*

Given two strings s and t, return the minimum window in s which will 
contain all the characters in t. If there is no such window in s that 
covers all characters in t, return the empty string "".

Note that If there is such a window, it is guaranteed that there will 
always be only one unique minimum window in s.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Example 2:

Input: s = "a", t = "a"
Output: "a"
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="totmtaptat";
    string s1="tta";
    // Making the Map
    unordered_map<char,int> mp;
    for(int i=0 ; i<s1.length();i++)
    mp[s1[i]]++;
    //Creating Variables
    int ans=INT_MAX;
    int i=0,j=0;
    int count=mp.size();
    // starting to  solve
    while(j<s.length())
    {
      // CALCULATION STEP 
       if(mp.find(s[j])!=mp.end())
       {
           mp[s[j]]--;
           if(mp[s[j]]==0)
           count--;
       }
       // step to slide " j "
       if(count>0)
        j++;
        // step where we will find a candidate for answer
       else if(count==0)
       {
           ans=min(ans,j-i+1);    
           // A candidate for our Answer
           // trying to minimize the window size after getting a candidate for answer
           while(count==0){
                if(mp.find(s[i])==mp.end()){
                   i++;
                   ans=min(ans,j-i+1);   // updating the answer
                }else{
                    mp[s[i]]++;
                    if(mp[s[i]]>0){
                       i++;
                       count++;
                    }else{
                       i++;
                       ans=min(ans,j-i+1);   // updating the answer
                    }
                }
            }
           j++;
       }
    }
    cout<<ans<<endl;
    return 0;
}