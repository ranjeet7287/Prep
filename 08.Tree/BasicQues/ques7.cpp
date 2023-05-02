// Count leaf nodes
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childern;
    TreeNode(T data){
        this->data=data;
    }
    ~TreeNode(){
        for(int i=0;i<childern.size();i++){
            delete childern[i];
        }
    }
};
int getLeafNodeCount(TreeNode<int> *root){
    if(root->childern.size()==0){
        return 1;
    }
    int count=0;
    for(int i=0;i<root->childern.size();i++){
        count+=getLeafNodeCount(root->childern[i]);
    }
    return count;
}