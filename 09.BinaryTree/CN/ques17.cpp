// Given a binary tree, write code to create a separate linked list for each level.
// You need to return the array which contains head of each level linked list.
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
template<typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data=data;
        this->next=NULL;
    }
};

vector<Node<int>*> ConstuctLinkList(BinaryTreeNode<int> *root){
    vector<Node<int>*> ans;
    if(root==NULL){
        return ans;
    }
    queue<BinaryTreeNode<int>*> pending;
    pending.push(root);
    pending.push(NULL);
    Node<int> *head=NULL;
    Node<int> *tail=NULL;

    while(pending.size()!=0){
        BinaryTreeNode<int> *front=pending.front();
        pending.pop();
        if(front==NULL){
            if(pending.empty()){
                ans.push_back(head);
                return ans;
            }
            ans.push_back(head);
            pending.push(NULL);
            head=NULL;
            tail=NULL;
        }
        if(front!=NULL){
            Node<int> *newnode=new Node<int>(front->data);
            if(head==NULL){
                head=newnode;
                tail=newnode;
            }else{
                tail->next=newnode;
                tail=tail->next;
            }
            if(front->left!=NULL){
                pending.push(front->left);
            }
            if(front->right!=NULL){
                pending.push(front->right);
            }
        }
    }
    return ans;
}