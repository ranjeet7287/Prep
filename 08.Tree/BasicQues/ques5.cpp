/*
Given a generic tree, find and return the node with maximum data.
You need to return the node which is having maximum data.
*/
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childern;

    TreeNode(T data){
        this->data=data;
    }

    ~TreeNode(){
        for(int i=0;i<childern.size();i++){
            delete childern[i];
        }
    }

};
TreeNode<int> *maxNode(TreeNode<int> *root){
    if(root==NULL){
        return root;
    }
    TreeNode<int> *max=root;
    for(int i=0;i<root->childern.size();i++){
        TreeNode<int> *child=maxNode(root->childern[i]);
        if(max->data < child->data){
            max=child;
        }
    }
    return max;
}