// Deep Copy - > Here we make new copy
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    char *name;
    int rollNo;
    
    public:
    Student(char *name,int rollNo){
        // this->name=name; Shallow Copy
        this->name=new char[strlen(name)+1];  // 1 -> For the Null Char at last.
        strcpy(this->name,name);              // name have diifent copy of diffrent address.

        this->rollNo=rollNo;
    }
    void Display(){
        cout<<name<<" "<<rollNo<<endl;
    }
};
int main(){
    char name[]="Arshdeep";
    Student s1(name,1);
    s1.Display();
    name[0]='a';
    Student s2(name,2);
    s2.Display();

    s1.Display(); // no changes will reflect in deep copy. 

}