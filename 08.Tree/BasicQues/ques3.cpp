// Take input and print a Tree by Level Wise
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
};
TreeNode<int> *takeinput(){
    int rootdata;
    cin>>rootdata;
    TreeNode<int> *root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        TreeNode<int> *front=pending.front();
        pending.pop();
        cout<<"Enter Number of "<<front->data<<endl;
        int numChild;
        cin>>numChild;

        for(int i=0;i<numChild;i++){
            int childata;
            cout<"Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childata;

            TreeNode<int> *child=new TreeNode<int>(childata);
            front->childern.push_back(child);
            pending.push(child);
        }
    }
    return root;
}

void print(TreeNode<int> *root){
    queue<TreeNode<int>*> pending;
    pending.push(root);
    while(pending.size()!=0){
        TreeNode<int> *front=pending.front();
        pending.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->childern.size();i++){
            cout<<front->childern[i]->data;
            if(i<front->childern.size()-1){
                cout<<",";
            }
            pending.push(front->childern[i]);
        }
        cout<<endl;
    } 
}