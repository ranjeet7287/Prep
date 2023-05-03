// Binary Tree -> Where every node has maximum 2 childern
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
        left=NULL;
        right=NULL;
    }
    ~BinaryTree(){
        delete left;
        delete right;
    }
};
// takeing input and print rexursively
BinaryTree<int> *takeinput(){
    int rootdata;
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    BinaryTree<int> *root=new BinaryTree<int>(rootdata);
    BinaryTree<int> *leftchild=takeinput();
    BinaryTree<int> *rightchild=takeinput();
    root->left=leftchild;
    root->right=rightchild;
    return root;
}
void print(BinaryTree<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"left"<<root->left->data<<endl;
    }
    if(root->right!=NULL){
        cout<<"right"<<root->right->data<<endl;
    }
    print(root->left);
    print(root->right);
}