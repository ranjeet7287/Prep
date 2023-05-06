// LCA in BST
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
BinaryTreeNode<int> *getLCA(BinaryTreeNode<int> *root,int n1,int n2){
    if(root==NULL){
        return root;
    }
    
    if(root->data==n1 || root->data==n2){
        return root;
    }

    if(root->data > n1 && root->data > n2){
        return  getLCA(root->left,n1,n2);
    }else if(root->data <n1 && root->data < n2){
        return getLCA(root->right,n1,n2);
    }

    BinaryTreeNode<int> *leftLCA=getLCA(root->left,n1,n2);
    BinaryTreeNode<int> *rightLCA=getLCA(root->right,n1,n2);

    if(leftLCA!=NULL && rightLCA!=NULL){
        return root;
    }else if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}
int getlca(BinaryTreeNode<int> *root,int n1,int n2){
    BinaryTreeNode<int> *root=getLCA(root,n1,n2);
    return (root==NULL) ? -1 : root->data;
}