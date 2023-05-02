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
int main(){
    TreeNode<int> *root=new TreeNode(1);
    TreeNode<int> *node1=new TreeNode(2);
    TreeNode<int> *node2=new TreeNode(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
}