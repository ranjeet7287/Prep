// // Bubble Sort (Iterative) LinkedList
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// int lenght(Node *head){
//     if(head==NULL){
//         return 0;
//     }
//     return 1+lenght(head->next);
// }
// Node *bubbleSort(Node *head){
//     int n=lenght(head->next);
//     for(int i=0;i<n;i++){
//         Node *prev=NULL;
//         Node *curr=head;
//         Node *nxt=NULL;
//         for(int j=0;j<n-1-i;j++){
//             if(curr->data > curr->next->data){
//                 if(prev==NULL){
//                     nxt=curr->next;
//                     head=nxt;
//                     curr->next=nxt->next;
//                     nxt->next=curr;
//                     prev=nxt;
//                 }else{

//                 }
//             }
//         }

//     }
// }