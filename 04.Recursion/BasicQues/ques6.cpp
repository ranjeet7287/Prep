// Count Zero
#include<bits/stdc++.h>
using namespace std;
int countZero(int n){
    if(n<=9){
        if(n%10==0){
            return 1;
        }else{
            return 0;
        }
    }
    int lastDigit=n%10;
    int count=0;
    if(lastDigit==0){
        count=1;
    }
    return count+countZero(n/10);
}