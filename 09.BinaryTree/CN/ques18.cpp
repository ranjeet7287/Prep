// For a given Binary Tree of type integer, print all the nodes without any siblings.
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
void printNodeaWithoutSibling(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->right==NULL){
        cout<<root->left->data<<" ";
        printNodeaWithoutSibling(root->left);
    }
    if(root->left==NULL && root->right!=NULL){
        cout<<root->right->data<<" ";
        printNodeaWithoutSibling(root->right);   
    }else{
        printNodeaWithoutSibling(root->left);
        printNodeaWithoutSibling(root->right);
    }
}