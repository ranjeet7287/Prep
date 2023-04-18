// Remove Duplicates Recursively
#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(char *arr){
    int len=strlen(arr);
    if(len==0 || len==1){
        return;
    }
    removeDuplicate(arr+1);
    if(arr[0]==arr[1]){
        int i=1;
        for(;arr[i]!='\0';i++){
            arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        removeDuplicate(arr);
    }
}