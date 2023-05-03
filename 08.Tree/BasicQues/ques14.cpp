// Given two generic trees, return true if they are structurally identical. 
// Otherwise return false.
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
bool isIdentical(TreeNode<int> *root1,TreeNode<int> *root2){
    if(root1->children.size()!=root2->children.size()){
        return false;
    }
    if(root1->data!=root2->data){
        return false;
    }
    for(int i=0;i<root1->children.size();i++){
        bool ans=isIdentical(root1->children[i],root2->children[i]);
        if(ans==false){
            return ans;
        }
    }
    return true;
}