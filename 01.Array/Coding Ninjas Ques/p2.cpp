// Sum of Infinite Array
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define in long long 
in findsumuptox(vector <in> &pre, in x, in n) {

    in count = (x / n)%mod;
    in res = (count * pre[(int) n]) % mod;
    res = (res + pre[(int) (x % n)]) % mod;
    return res;
}
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q)
{
   vector<int> ans;
   vector<in> pre(n+1);
   pre[0] = 0;
   for(int i=1;i<n+1;i++){
    pre[i] = (pre[i-1]+arr[i-1])%mod;
   }
   for (int i = 0; i < queries.size(); i++){
    in l = queries[i][0];
    in r = queries[i][1];
    in rs = findsumuptox(pre, r, n);
    in ls = findsumuptox(pre, l - 1, n);
    ans.push_back((int)((rs - ls + mod) % mod));
   }
   return ans;
}