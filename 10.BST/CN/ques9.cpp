// Given a binary tree and an integer S, print all the pair of nodes whose sum equals S.
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public: 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void convertToArray(BinaryTreeNode<int> *root,vector<int> &ans){
    if(root==NULL){
        return;
    }
    convertToArray(root->left,ans);
    ans.push_back(root->data);
    convertToArray(root->right,ans);
}
void pairSum(BinaryTreeNode<int> *root,int s){
    vector<int> ans;
    convertToArray(root,ans);
    sort(ans.begin(),ans.end());
    int i=0;
    int j=ans.size()-1;
    while(i<j){
        if(ans[i]+ans[j]==s){
            i++;
            j--;
        }
        if(arr[i]+arr[j]>s){
            j--;
        }else{
            i++;
        }
    }
}