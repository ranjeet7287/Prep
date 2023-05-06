// LCA of Binary Tree
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
int getLCA(BinaryTreeNode<int> *root,int n1,int n2){
    if(root==NULL){
        return -1;
    }
    if(root->data== n1 || root->data==n2){
        return root->data;
    }
    int left=getLCA(root->left,n1,n2);
    int right=getLCA(root->right,n1,n2);
    if(left!=-1 && right==-1){
        return left;
    }else if(left==-1 && right!=-1){
        return right;
    }else if(left!=-1 && right!=-1){
        return root->data
    }else{
        return -1;
    }
}