// Check AB
#include<bits/stdc++.h>
using namespace std;
bool checkAB(char arr[]){
    int len=strlen(arr);
    if(len==0){
        return true;
    }
    if(arr[0]=='a' && arr[1]=='\0'){
        return true;
    }else if(arr[0]=='a' && arr[1]=='a'){
        checkAB(arr+1);
    }else if(arr[0]=='a' && arr[1]=='b' && arr[1]=='b'){
        checkAB(arr+3);
    }
    return false;
}