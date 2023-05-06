// Create & Insert Duplicate Node
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
void createDuplicate(BinaryTreeNode<int> *root){
    if(root==NULL){
        return ;
    }
    int data=root->data;
    BinaryTreeNode<int> *newnode=new BinaryTreeNode<int>(data);
    BinaryTreeNode<int> *temp=root->left;
    root->left=newnode;
    newnode->left=temp;
    if(temp!=NULL){
        createDuplicate(temp);
    }
    if(root->right!=NULL){
        createDuplicate(root->right);
    }
}
