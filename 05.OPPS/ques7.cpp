// Copy Construstor 
// In-Bulit Copy Constructor do Shallow Copy So built own Copy Constructor todo Deep Copy
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char *name;
    int rollNo;

    public:
    Student(char *name,int rollNo){
        // Deep Copy
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->rollNo=rollNo;
    }
    // Copy Constructor
    Student(Student const &s){
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
        this->rollNo=s.rollNo;
    }
    void Display(){
        cout<<name<<" "<<rollNo<<endl;
    }
};
int main()
{
    char name[]="Ranjeet";
    Student s1(name,1);
    s1.Display();

    Student s2(s1);
    s2.Display();

    s2.name[0]='s';
    s2.Display();
    s1.Display();
}