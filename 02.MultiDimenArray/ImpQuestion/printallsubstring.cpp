// Print all substring of an string 
#include<bits/stdc++.h>
using namespace std;
void  allSubstring(char *str){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            for(int k=i;k<=j;j++){
                cout<<str[k];
            }
            cout<endl;
        }
    }
}
int main()
{
    char str[10];
    for(int i=0;i<10;i++){
        cin>>str[i];
    }
    allSubstring(str);
}