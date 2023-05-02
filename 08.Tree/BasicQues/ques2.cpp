// input and print  recursively
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
void printTree(TreeNode<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
TreeNode<int> *takeinput(){
    int rootdata;
    cout<<"Enter root data : ";
    cin>>rootdata;
    TreeNode<int> *root=new TreeNode<int>(rootdata);
    int n;
    cout<<"Enter Number of children : ";
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int> *child=takeinput();
        root->children.push_back(child);
    }
    return root;
}