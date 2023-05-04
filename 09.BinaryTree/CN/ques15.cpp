// Level Order traversal
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
void levelorder(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pending;
    pending.push(root);
    pending.push(NULL);
    while(pending.size()!=0){
        BinaryTreeNode<int> *front=pending.front();
        pending.pop();
        if(front==NULL){
            if(pending.empty()){
                break;
            }
            cout<<endl;
            pending.push(NULL);
        }else{
            cout<<front->data<<":";
            if(front->left!=NULL){
                pending.push(front->left);
            }
            if(front->right!=NULL){
                pending.push(front->right);
            }
        }
    }
}