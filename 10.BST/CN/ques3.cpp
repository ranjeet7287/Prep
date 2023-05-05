// Check if a Binary Tree is BST
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BinaryTree{
    public:
    T data;
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(T data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
    ~BinaryTree(){
        delete left;
        delete right;
    }
};

bool isBSTHelper(BinaryTree<int> *root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data > max || root->data < min){
        return false;
    }
    return  isBSTHelper(root->left,min,root->data-1) 
                        && 
            isBSTHelper(root->right,root->data,max);
}
bool isBST(BinaryTree<int> *root){
    isBSTHelper(root,INT_MIN,INT_MAX);
 