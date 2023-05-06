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
    private:
    BinaryTreeNode<int> *deletedata(int data,BinaryTreeNode<int> *root){
        if(root==NULL){
            return NULL;
        }
        if(root->data > data){
            root->left=deletedata(data,root->left);
        }else if(root->data < data){
            root->right=deletedata(data,root->right);
        }else{
            // 1. if both left and right node are null
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            // 2. if left node is NULL then right node beacome root node and delete root , intailise with newnode
            else if(root->left==NULL){
                BinaryTreeNode<int> *newnode=root->right;
                root->right=NULL;
                delete root;
                return newnode;
            }
            // 3. Similar condtion for left side 
            else if(root->right==NULL) {
                BinaryTreeNode<int> *newnode=root->left;
                root->left=NULL;
                delete root;
                return newnode;
            }
            // 4.If both side have nodes then we will do replacement
            else{
                BinaryTreeNode<int> *minNode=root->right;
                while(minNode->left!=NULL){
                    minNode=minNode->left;
                }
                int rightmin=minNode->data;
                root->data=rightmin;
                root->right=deletedata(rightmin,root->right);
                return root;
            }
        }
    }
    public:
    void remove(int data) { 
        // Implement the remove() function 
        root=deletedata(data,root);
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