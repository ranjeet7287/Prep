// Replace with depth
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
void help(TreeNode<int> *root,int depth){
    root->data=depth;
    for(int i=0;i<root->children.size();i++){
        help(root->children[i],depth+1);
    }
}
void repalceWithDepthValue(TreeNode<int> *root){
    if(root==NULL){
        return ;
    }
    help(root,0);
}