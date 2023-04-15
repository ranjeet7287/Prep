// Replace a charchater
#include<bits/stdc++.h>
using namespace std;
void ReplaceChar(char arr[],char c1,char c2){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]==c1){
        arr[0]=c2;
    }
    ReplaceChar(arr+1,c1,c2);
}