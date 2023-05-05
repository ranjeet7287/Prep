// Given a BST and an integer k. 
// Find and return the path from the node with data k and root (if a node with data k is present in given BST) in a list.
// Return empty list otherwise.
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
vector<int> *getpath(BinaryTreeNode<int> *root,int k){
    if(root==NULL){
        return NULL;
    }
    if(root->data==k){
        vector<int> *ans=new vector<int>();
        ans->push_back(root->data);
        return ans;
    }else if(root->data > k){
        vector<int> *ans=getpath(root->left,k);
        if(ans!=NULL){
            ans->push_back(root->data);
        }
        return ans;
    }
    vector<int> *ans=getpath(root->right,k);
    if(ans!=NULL){
        ans->push_back(root->data);
    }
    return ans;
}