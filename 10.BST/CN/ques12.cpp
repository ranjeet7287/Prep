// Given a Binary tree, find the largest BST subtree.
// That is, you need to find the BST with maximum height in the given binary tree.
// You have to return the height of largest BST.
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

class BSTclass{
    public:
    int minimum;
    int maximum;
    bool isBST;
    int height;
};

BSTclass bst(BinaryTreeNode<int> *root){
    if(root==NULL){
        BSTclass ans;
        ans.minimum=INT_MAX;
        ans.maximum=INT_MIN;
        ans.isBST=true;
        ans.height=0;
        return ans;
    }

    BSTclass left=bst(root->left);
    BSTclass right=bst(root->right);

    int min_v=min(root->data,min(left.minimum,right.minimum));
    int max_v=max(root->data,max(left.maximum,right.maximum));

    bool isBSTfinal=(root->data > left.maximum) && (root->data <= right.minimum) && (left.isBST) && (right.isBST);
    
    BSTclass output;
    output.minimum=min_v;
    output.maximum=max_v;
    output.isBST=isBSTfinal;

    if(isBSTfinal){
        output.height=1+max(left.height,right.height);
    }else{
        output.height=max(left.height,right.height);
    }
    return output;
}
int largestBSTsubtree(BinaryTreeNode<int> *root){
    return bst(root).height;
}