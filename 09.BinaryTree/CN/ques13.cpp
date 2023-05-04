// sum of all nodes
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
int getSum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    return root->right+getSum(root->left)+getSum(root->right);
}