// Construct BST from sorted Array
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class BinaryTree{
    public:
    T data;
    BinaryTree *left;
    BinaryTree *right;
    BinaryTree(T data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
    ~BinaryTree(){
        delete left;
        delete right;
    }
};
BinaryTree<int> *constructBSTH(int *arr,int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(start+(end-start)/2);
    BinaryTree<int> *leftnode=constructBSTH(arr,start,mid-1);
    BinaryTree<int> *rightnode=constructBSTH(arr,mid+1,end);
    BinaryTree<int> *root=new BinaryTree<int>(arr[mid]);
    root->left=leftnode;
    root->right=rightnode;
    return root;
}
BinaryTree<int> *constructBST(int *arr,int n){
    if(n==0){
        return NULL;
    }
    return constructBSTH(arr,0,n-1);
}