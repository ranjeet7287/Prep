/*
Given a binary tree, check if it is balanced. 
Return true if given binary tree is balanced, false otherwise.*/
#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
int height(BinaryTreeNode<int> *root){
    if(root==NULL){
        return NULL;
    }
    return 1+height(root->left)+height(root->right);
}
bool checkBalanced(BinaryTreeNode<int> *root){
    if(root==NULL){
        return true;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    return false;
}