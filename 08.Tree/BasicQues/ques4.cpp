// Given a generic tree, find and return the sum of all nodes present in the given tree.

#include<bits/stdc++.h>
using namespace std;
template <typename T>
class TreeNode {
    public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data) {
        this->data = data;
    }
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

int sumNodes(TreeNode<int> *root){
    int sum=root->data;
    for(int i=0;i<root->children.size();i++){
        sum+=sumNodes(root->children[i]);
    }
    return sum;
}