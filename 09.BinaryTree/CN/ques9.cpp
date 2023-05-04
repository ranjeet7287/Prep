//  Construct Tree from Preorder and Inorder
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
BinaryTreeNode<int> *help(int *preorder,int prestart,int preend,int *inorder,int instart,int inend){
    // Edges Case
    if(instart>inend){
        return NULL;
    }
    // root index
    int root_data=preorder[prestart];
    int rootindex=-1;
    for(int i=instart;i<=inend;i++){
        if(root_data==inorder[i]){
            rootindex=i;
            break;
        }
    }
    // left root
    int left_Pstart=prestart+1;
    int left_Istart=instart;
    int left_Iend=rootindex-1;
    int left_Pend=left_Iend-left_Istart+left_Pstart;
    // right root
    int right_Pstart=left_Pend+1;
    int right_Pend=preend;
    int right_Istart=rootindex+1;
    int right_Iend=inend;
    // connection and recursive calls
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(root_data);
    root->left=help(preorder,left_Pstart,left_Pend,inorder,left_Istart,left_Iend);
    root->right=help(preorder,right_Pstart,right_Pend,inorder,right_Istart,right_Iend);
    return root;
}
BinaryTreeNode<int> *buildTree(int *preorder,int prelenght,int *inorder,int inlenght){
    return help(preorder,0,prelenght-1,inorder,0,inlenght-1);
}