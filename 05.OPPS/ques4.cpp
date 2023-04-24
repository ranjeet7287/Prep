// Now we learn about Staics Property of Object
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int rollNo;
    int age;

    private:
    static int totalStudent;
    
    public:
    Student(){
        totalStudent++;
    }
    int getrollNo() const{
        return rollNo;
    }
    static int getTotalStudent(){
        return totalStudent;
    }
};
int Student :: totalStudent=0;
int main(){
    Student s1;
    cout<<s1.rollNo<<endl;
    cout<<Student ::totalStudent<<endl;
}