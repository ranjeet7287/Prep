// Remove Leaf nodes
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
BinaryTreeNode<int> *RemoveLeafNode(BinaryTreeNode<int> *root){
    if(root->left==NULL && root->data==NULL){
        delete root;
        return NULL;
    }
    if(root->left!=NULL){
        root->left=RemoveLeafNode(root->left);
    }
    if(root->right!=NULL){
        root->right=RemoveLeafNode(root->right);
    }
    return root;
}