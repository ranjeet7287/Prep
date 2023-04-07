#include<bits/stdc++.h>
using namespace std;
void SprialPrint(int **input,int nRows ,int nCols){
    int i,k=0,l=0;
    while(k<nRows && l<nCols){
        for(int i=l;i<nCols;i++){
            cout<<input[k][i]<<" ";
        }
        k++;
        for(int i=k;i<nRows;i++){
            cout<<input[nCols-1][i]<<" ";
        }
        nCols--;
        if(k<nRows){
            for(int i=nCols-1;i>=l;--i){
                cout<<input[nRows-1][i]<<" ";
            }
            nRows--;
        }
        if(l<nCols){
            for(int i=nRows-1;i>=k;--i){
                cout<<input[i][l]<<" ";
            }
            i++;
        }
    }
}