// count number of nodes
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
int numofnode(BinaryTree<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+(numofnode(root->left)+numofnode(root->right));
}