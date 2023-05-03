// Given a generic tree and an integer x, check if x is present in the given tree or not. 
// Return true if x is present, return false otherwise
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
bool conatinX(TreeNode<int> *root,int x){
    if(root->data==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    for(int i=0;i<root->children.size();i++){
        bool ans=conatinX(root->children[i],x);
        if(ans==true){
            return ans;
        }
    }
    return false;
}
