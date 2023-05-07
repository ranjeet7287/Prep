// Given a binary search tree, you have to replace each node's data with 
// the sum of all nodes which are greater or equal than it. 
// You need to include the current node's data also.
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
int replace(BinaryTreeNode<int> *root,int sum){
    if(root==NULL){
        return sum;
    }
    sum=replace(root->right,sum);
    sum+=root->data;
    root->data=sum;
    sum=replace(root->left,sum);
    return sum;
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root) 
{
    if(root==NULL){
        return;
    }
    int ans=replace(root,0);
    return;
}