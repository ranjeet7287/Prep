// Factorial
#include<bits/stdc++.h>
using namespace std;
int Factorial(int n)
{
    // Base Case
    if(n==0){
        return 1;
    }
    return n*Factorial(n-1);
}

// Fibbonaci Number
int Fibonaci(int n)
{
    if(n==0){return 0};
    if(n==1){return 1};
    return Fibonaci(n-1)+Fibonaci(n-2);
}
