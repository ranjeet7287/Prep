#include<bits/stdc++.h>
using namespace std;
int partion(int arr[],int start,int end){
	int x=arr[start];
	int count=0;
	for(int i=start+1;i<=end;i++){
		if(arr[i]<=x){
			count++;
		}
	}
	int xindex=count+start;
	int temp=arr[xindex];
	arr[xindex]=arr[start];
	arr[start]=temp;
	int i=start,j=end;
	while(i<=xindex && j>=xindex){
		while(arr[i]<=x){
			i++;
		}
		while(arr[j]>x){
			j--;
		}
		if(i<xindex && j>xindex){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
			j--;
		}
	}
	return xindex;
}
void quick(int input[],int start,int end){
	if(start>=end){
		return;
	}
	int p=partion(input,start,end);
	quick(input,start,p-1);
	quick(input,p+1,end);
}
void quickSort(int input[], int size){
	quick(input,0,size-1);
}