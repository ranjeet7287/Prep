// Search in Binary Search Tree
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
bool searchInBst(BinaryTree<int> *root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true
    }
    if(root->data>x){
        searchInBst(root->left,x);
    }else{
        searchInBst(root->right,x);
    }
}