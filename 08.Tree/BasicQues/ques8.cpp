// Pre Order Traversal
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this->data=data;
    }
};

void preorder(TreeNode<int> *root){
    cout<<root->dat<<" ";
    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }
}


