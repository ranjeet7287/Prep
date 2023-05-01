// Inbuilt Queue
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop();           // 1
    cout<<q.front()<<endl;   // 2
    cout<<q.size()<<endl;    // 4
}