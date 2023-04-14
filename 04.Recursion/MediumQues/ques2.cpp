// Remove X
#include<bits/stdc++.h>
using namespace std;
void RemoveX(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]!=x){
        RemoveX(arr+1);
    }else{
        int i=1;
        for(;arr[i]!='\0';i++){
            arr[i-1]=arr[i];
        }
        arr[i-1]=arr[i];
        return removeX(arr);
    }
}