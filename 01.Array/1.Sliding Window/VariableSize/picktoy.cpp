/*
John is at a toy store help him pick maximum number of toys. 
He can only select in a continuous manner and he can select only two types of toys.
*/

#include<bits/stdc++.h>
using namespace std;

int PickToy(string str)
{
    unordered_map<char,int> map;
    map.clear();
    int i=0,j=0;
    int maxi=INT_MIN;
    while(j<str.size())
    {
        map[str[j]]++;
        // 2 -> maximum 2 type of toys
        if(map.size()<2){
            j++;
        }else if(map.size()==2){
            maxi=max(maxi,j-i+1);
            j++;
        }else if(map.size()>2){
            while (map.size()>2){
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
    cout<<PickToy(str);
    return 0;
}