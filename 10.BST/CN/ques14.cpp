// For a given Binary Tree of type integer and a number K, print out all root-to-leaf
// paths where the sum of all the node data along the path is equal to K.
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
void help(BinaryTreeNode<int> *root,int k,vector<int> &ans){    
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    if(root->data==k && root->left==NULL && root->right==NULL){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        ans.pop_back();
        return;
    }
    help(root->left,k-root->data,ans);
    help(root->right,k-root->data,ans);
}
void rootToLeafPathSumtoK(BinaryTreeNode<int> *root,int k){
    vector<int> ans;
    help(root,k,ans);
    return;
}