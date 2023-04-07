// For a given two strings, 'str1' and 'str2', 
// check whether they are a permutation of each other or not.
#include<bits/stdc++.h>
using namespace std;
bool isPermutation(char input1[], char input2[])
{
    int arr[256]={0};
    for(int i=0;input1[i]!='\0';i++){
        int index=input1[i];
        arr[index]++;
    }
    for(int i=0;input2[i]!='\0';i++){
        int index=input2[i];
        arr[index]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}