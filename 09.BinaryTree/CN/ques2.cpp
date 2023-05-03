// Binary Tree input and print level wise
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

BinaryTree<int> *takeinput(){
    int rootdata;
    cin>>rootdata;
    BinaryTree<int> *root=new BinaryTree<int>(rootdata);
    queue<BinaryTree<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        BinaryTree<int> *front=pending.front();
        pending.pop();
        int leftchild,rightchild;
        cin>>leftchild;
        if(leftchild!=-1){
            BinaryTree<int> *leftNode=new BinaryTree<int>(leftchild);
            front->left=leftNode;
            pending.push(leftNode);
        }
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryTree<int> *rightNode=new BinaryTree<int>(rightchild);
            front->right=rightNode;
            pending.push(rightNode);
        }
    }
    return root;
}

void print(BinaryTree<int> *root){
    queue<BinaryTree<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        BinaryTree<int> *front=pending.front();
        pending.pop();
        cout<<front->data<<":";
        if(front->left!=NULL){
            cout<<"L : "<<front->left->data<<",";
            pending.push(root->left);
        }else{
            cout<<"L : -1";
        }
        if(root->right!=NULL){
            cout<<"R"<<front->right->data;
            pending.push(front->right);
        }else{
            cout<<"R : -1";
        }
        cout<<endl;
    }
}

