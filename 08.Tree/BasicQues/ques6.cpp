// Height of Tree
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
int getHeight(TreeNode<int> *root){
    int count=0;
    for(int i=0;i<root->childern.size();i++){
        int ch=getHeight(root->childern[i]);
        count=max(count,ch);
    }
    return count+1;
}