// Replace pi  by 12345
// rpis --> r12345s
#include<bits/stdc++.h>
using namespace std;
void helpreplace(char arr[],int start){
    if(arr[start]=='\0' || arr[start+1]=='\0'){
        return;
    }
    helpreplace(arr,start+1);
    if(arr[start]=='p' && arr[start+1]=='i'){
        for(int i=strlen(arr);i>=start+2;i--){ // (here 2 -> is repsenting number of pi digit)
            arr[i+3]=arr[i]; //(1235 [5] - pi  [2] --> 3 number of shifting)
        }
        arr[start]='1';
        arr[start+1]='2';
        arr[start+2]='3';
        arr[start+3]='4';
        arr[start+4]='5';
    }
}
void replace(char arr[]){
    helpreplace(arr,0);
}