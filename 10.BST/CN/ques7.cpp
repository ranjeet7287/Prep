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

class BST {
    // Define the data members
    BinaryTreeNode<int> *root;
   public:
    BST() { 
        // Implement the Constructor
        root=NULL;
    }
    ~BST(){
        delete root;
    }

	/*----------------- Public Functions of BST -----------------*/

    void remove(int data) { 
        // Implement the remove() function 
        
    }

    private:
    void print(BinaryTreeNode<int> *root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<":";
        if(root->left!=NULL){
            cout<<"L : "<<root->left->data<<",";
        }
        if(root->right!=NULL){
            cout<<"R :"<<root->right->data<<",";
        }
    }

    public:
    void print() { 
        print(root);
    }

    private:
    BinaryTreeNode<int> *insert(int data,BinaryTreeNode<int> *root){
        if(root==NULL){
            BinaryTreeNode<int> *newnode=new BinaryTreeNode<int>(data);
            return newnode;
        }
        if(root->data >=data){
            root->left=insert(data,root->left);
        }else{
            root->right=insert(data,root->right);
        }
        return root;
    } 
    public:
    void insert(int data) { 
        this->root=insert(data,this->root); 
    }

    private:
	bool searchH(int data,BinaryTreeNode<int> *root){
        if(root==NULL){
            return false;
        }
        if(root->data==data){
            return true;
        }else if(root->data > data){
            searchH(data,root->left);
        }else{
            searchH(data,root->right);
        }
    }
    public:
    bool search(int data) {
		return searchH(data,root);
    }
};