// Given a tree and an integer x,
// find and return the number of nodes which contains data greater than x.
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
int getlargerNodeCount(TreeNode<int> *root,int x){
    if(root->data==NULL){
        return 0;
    }
    int count=0;
    if(root->data > x){
        count++;
    }
    for(int i=0;i<root->children.size();i++){
        count+=getlargerNodeCount(root->children[i],x);
    }
    return count;
}