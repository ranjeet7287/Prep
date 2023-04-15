// Pair Star
#include<bits/stdc++.h>
using namespace std;
void help(char arr[],int start){
    if(input[start]=='\0'){
        return;
    }
    help(arr,start+1);
    if(arr[start]==arr[start+1]){
        // shifting 
        int len=strlen(arr);
        arr[len+1]='\0';
        int i;
        for(i=len-1;i>=start+1;i--){
            arr[i+1]=arr[i];
        }
        arr[start+1]='*';
    }      
}
void pairstar(char input[]){
    return help(input,0);
}