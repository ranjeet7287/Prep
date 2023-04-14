//Number Of Digit 
// 12345    - >       5
#include<bits/stdc++.h>
using namespace std;
int NumberOfDigit(int n)
{
    if(n==0){
        return 0;
    }
    int small=NumberOfDigit(n/10);
    return small+1;
} 