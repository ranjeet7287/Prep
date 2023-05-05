// Construct Sorted LL from BST
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
template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};
class Pair{
    public:
    Node<int> *head;
    Node<int> *tail;
    Pair(){
        head=NULL;
        tail=NULL;
    }
};

Pair constLL(BinaryTreeNode<int> *root){
    Pair ans;
    if(root==NULL){
        return ans;
    }
    // Inorder traversal
    Pair leftnode=constLL(root->left);
    Pair rightnode=constLL(root->right);
    Node<int> *newnode=new Node<int>(root->data);

    // connevtion left->node->right
    if(leftnode.tail!=NULL){
        leftnode.tail->next=newnode;
    }
    newnode->next=rightnode.head;

    // Intailising head with pair ans
    if(leftnode.head!=NULL){
        ans.head=leftnode.head;
    }else{
        ans.head=newnode;
    }
 
    // Intailising tail with pair ans
    if(rightnode.tail!=NULL){
        ans.tail=rightnode.tail;
    }else{
        ans.tail=newnode;
    }

    return ans;
}
Node<int> *BSTtoLL(BinaryTreeNode<int> *root){
    Pair ans=constLL(root);
    return ans.head;
}