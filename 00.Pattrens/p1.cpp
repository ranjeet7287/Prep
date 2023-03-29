/*
Number Pattern 1
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,j=0;
    while(i<=n){
        int q=1;
        while(q<=i){
            cout<<(q+j)<<" ";
            q++;
        }
        cout<<endl;
        i++;
        j++;
    }
}