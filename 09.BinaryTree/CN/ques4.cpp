// For a given Binary Tree of type integer and a number X, 
// find whether a node exists in the tree with data X or not
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
        left=NULL;
        right=NULL;
    }
    ~BinaryTree(){
        delete left;
        delete right;
    }
};
bool isNodePresent(BinaryTree<int> *root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    return isNodePresent(root->left,x) || isNodePresent(root->right,x);
}