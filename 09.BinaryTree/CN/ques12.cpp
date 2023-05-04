// Max and Min value in Binary Tree
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
pair<int,int> getMaxandMin(BinaryTreeNode<int> *root){
    pair<int,int> ans;
    ans.first=INT_MIN;
    ans.second=INT_MAX;
    if(root==NULL){
        return ans;
    }
    pair<int,int> leftPair=getMaxandMin(root->left);
    pair<int,int> rightPair=getMaxandMin(root->right);
    ans.first=max(root->data,max(leftPair.first,rightPair.first));
    ans.second=min(root->data,min(leftPair.second,rightPair.second));
    return ans;
}