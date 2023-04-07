#include<bits/stdc++.h>
using namespace std;
void WavePrint(int *arr,int nrows,int mcols){
    for(int i=0;i<mcols;i++){
        int u=nrows-1;
        for(int j=0;j<nrows;j++){
            if(i==0 || i%2==0){
                cout<<arr[j][i]<<" ";
            }else{
                cout<<arr[u][i]<<" ";
            }
            u--;
        }
    }
}