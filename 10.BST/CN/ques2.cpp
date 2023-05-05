// Given a Binary Search Tree and two integers k1 and k2, 
// find and print the elements which are in range k1 and k2 (both inclusive).
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
void elementsInRangeK1K2(BinaryTree<int>* root, int k1, int k2){
    if(root==NULL){
        return ;
    }
    if(root->data>k1){
        if(root->left!=NULL){
            elementsInRangeK1K2(root->left,k1,k2);
        }
    }
    if(root->data >=k1 && root->data<=k2){
        cout<<root->data<<" ";
    }
    elementsInRangeK1K2(root->right,k1,k2);
}