// Diameter of Binary Tree

#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

// Approch 1 
// we will calculate leftheight , rightheight , leftheight+rightheight  --> Max of from these three will our ans
int height(BinaryTreeNode<int> *root){
    if(root==NULL){
        return NULL;
    }
    return 1+max(height(root->left),height(root->right));
}
int diameter(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int op1=height(root->left)+height(root->right);  // 0(n)
    int op2=diameter(root->left);                    // 0(n/2)
    int op3=diameter(root->right);                   // 0(n/2)
    return max(op1,max(op2,op3));
}
// 0(n.log(n))



// Approch 2
// 0(n)
pair<int,int> diameterBinaryTree(BinaryTreeNode<int> *root){
    
    if(root==NULL){
        pair<int,int> ans;
        ans.first=0;
        ans.second=0;
        return ans;
    }

    pair<int,int> leftans=diameterBinaryTree(root->left);
    pair<int,int> rightans=diameterBinaryTree(root->right);

    int leftheight=leftans.first;
    int rightheight=rightans.first;

    int leftDiameter=leftans.second;
    int rightDiameter=rightans.second;

    int height=1+max(leftheight,rightheight);
    int diameter=max((leftheight+rightheight),max(leftDiameter,rightDiameter));

    pair<int,int> d;
    d.first=height;
    d.second=diameter;
    return d;
}