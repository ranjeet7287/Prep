//Welcome to Coding Ninjas
//Ninjas Coding to Welcome
#include<bits/stdc++.h>
using namespace std;
void reverseStringWordWise(char *arr)
{
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    int i=0;
    int j=len-1;;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    int k;
    for(int i=0,j=0;i<len;i++){
        if(arr[i]==' '||i==len-1){
            if(i<len){
                k=i-1;
            }else{
                k=i;
            }
            while(j<k){
                char temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
                j++;
                k--;
            }
            j=i+1;
        }
    }
}