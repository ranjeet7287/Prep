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

BinaryTreeNode<int>  *help(int *postorder,int poststart,int postend,int *inorder,int instart,int inend){
    if(instart>inend){
        return NULL;
    }
    
    int root_data=postorder[postend];
    int rootindex=-1;
    for(int i=instart;i<=inend;i++){
        if(root_data==inorder[i]){
            rootindex=i;
            break;
        }
    }
    
    int left_Pstart=poststart;
    int left_Istart=instart;
    int left_Iend=rootindex-1;
    int left_Pend=left_Pstart-left_Istart+left_Iend;


    int right_Pstart=left_Pend+1;
    int right_Pend=postend-1;
    int right_Istart=rootindex+1;
    int right_Iend=inend;

    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootdata);
    root->left=help(postorder,left_Pstart,left_Pend,inorder,left_Istart,left_Iend);
    root->right=help(postorder,right_Pstart,right_Pend,inorder,right_Istart,right_Iend);
    return root;
}
BinaryTreeNode<int> *bulidTree(int *postorder,int postlen,int *inorder,int inlen){
    return help(postorder,0,postlen-1,inorder,0,inlen-1);
}