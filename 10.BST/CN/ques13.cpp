// Print nodes at distance k from node

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

void help2(BinaryTreeNode<int> *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0 && root!=NULL){
        cout<<root->data<<" ";
        return;
    }
    help2(root->left,k-1);
    help2(root->right,k-1);
}
int help(BinaryTreeNode<int> *root,int node,int k){
    if(root==NULL){
        return -1;
    }
    // depth k
    if(root->data==node){
        help2(root,k);
        return 0;
    }

    // up key 
    int leftdist=help(root->left,node,k);
    int rightdist;
    if(leftdist==-1){
        rightdist=help(root->right,node,k);
        if(rightdist==-1){
            return -1;
        }else if(rightdist+1==k){
            cout<<root->data<<endl;
            return k;
        }else{
            help2(root->left,k-rightdist-2);
            return rightdist+1;
        }
    }else if(leftdist+1==k){
        cout<<root->data<<endl;
        return k;
    }else{
        help2(root->right,k-leftdist-2);
        return leftdist+1;
    }
}
void nodeAtDistanceK(BinaryTreeNode<int> *root,int node,int k){
    int x=help(root,node,k);
}