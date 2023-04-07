// reverse a string 
#include<bits/stdc++.h>
using namespace std;
void Reverse(char *arr)
{
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str[10];
    for(int i=0;i<10;i++){
        cin>>str[i];
    }
    Reverse(str);
    for(int i=0;i<10;i++){
        cout<<str[i];
    }
    return 0;
}