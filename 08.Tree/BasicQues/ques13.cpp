// Node with maximum child sum
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
// Approch 1
TreeNode<int> *maxSumNode(TreeNode<int> *root){
    TreeNode<int> *maxsum=NULL;
    int total=0;
    queue<TreeNode<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        TreeNode<int> *front=pending.front();
        pending.pop();
        int sum=front->data;
        for(int i=0;i<front->children.size();i++){
            sum+=front->children[i]->data;
            pending.push(front->children[i]);
        }
        if(sum>total){
            total=sum;
            maxsum=front;
        }
    }
    return maxsum;
}

// Approch 2
template<typename T>
class Pair{
    public:
    TreeNode<T> *node;
    int sum;
};
Pair<int> *maxSumNodeHelper(TreeNode<int> *root){
    if(root==NULL){
        Pair<int> *ans=new Pair<int>();
        ans->node=NULL;
        ans->sum=INT_MIN;
        return ans;
    }
    int sum=root->data;
    for(int i=0;i<root->children.size();i++){
        sum+=root->children[i]->data;
    }
    Pair<int> *ans=new Pair<int>();
    ans->node=root;
    ans->sum=sum;

    for(int i=0;i<root->children.size();i++){
        Pair<int> *childans=maxSumNodeHelper(root->children[i]);
        if(childans->sum > ans->sum){
            ans=childans;
        }
    }
    return ans;
}
TreeNode<int> *maxSumNode(TreeNode<int> *root){
    return maxSumNodeHelper(root)->node;
}
