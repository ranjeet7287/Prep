// Make Maximum Number 
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
string findLargestNum(Node *head){
    Node *temp=head;
    vector<int> v;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    string s;
    for(int i=0;i<v.size();i++){
        s+=to_string(i);
    }
    int i=0;
    while(s[i]=='0'){
        i++;
    }
    if(s[0]=='0'){
        s.erase(0,i-1);
    }
    return s;
}