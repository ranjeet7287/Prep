// Check Palindrome 
#include<bits/stdc++.h>
using namespace std;
bool help(char arr[],int start,int end){
    if(start>=end){
        return true;
    }
    if(arr[start]!=arr[end]){
        return false;
    }
    return help(arr,start+1,end-1);
}
bool checkPalin(char arr[]){
    int len=strlen(arr);
    return help(arr,0,len-1);
}


// Sum of digits (recursive)
int sumofDigit(int n)
{
    if(n==0){
        return 0;
    }
    int small=sumofDigit(n/10);
    return small+n%10;
}