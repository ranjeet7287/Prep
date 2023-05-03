// Mirror
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
void MirrorBinaryTree(BinaryTree<int> *root){
    if(root==NULL){
        return;
    }
    BinaryTree<int> *temp=root->left;
    root->left=root->right;
    root->right=temp;
    MirrorBinaryTree(root->left);
    MirrorBinaryTree(root->right);
}