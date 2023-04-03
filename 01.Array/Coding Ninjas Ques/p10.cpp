#include <bits/stdc++.h> 

#include <bits/stdc++.h> 

int findMajorityElement(int arr[], int n) {

//approach 1(brute force)

//  unordered_map<int,int>m;

// for(int i=0;i<n;i++){

//  m[arr[i]]++;

// }

// for(auto i:m){
//  if(i.second>n/2){
//      return i.first;
//  }
// }
// return -1;
// }
 
// approach 2
int index=0;
int element=arr[0];
int count =1;
for(int i=1;i<n;i++){
    if(arr[i]==element){
        count++;
    }
    if(arr[i]!=element){
        count--;
    }
    if(count==0){
        element=arr[i];
        index=i;
        count =1;
    }
}
int c=0;
for(int i=0;i<n;i++){
    if(arr[i]==arr[index]){
        c++;
    }
}
if(c>n/2){
    return arr[index];
}
return -1;
}