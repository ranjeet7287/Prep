// OPPS are maily asked in our debugging skil tests.
// CREATING 
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int rollNo;
    
    private:
    int age;
    
    public:
    // Deafult Constructor
    Student(){
        cout<<"Deafult Constructor Call !!"<<endl;
    }
    // Desturctor 
    ~Student(){
        cout<<"Destructor"<<endl;
    }
    void Display(){
        cout<<rollNo<<" "<<age<<endl;
    }
    // getter and setter
    int getAge(){
        return age;
    }
    void Setage(int age){
        this->age=age;
    }
};
int main()
{
    // Creating Object Statically
    Student s1;
    s1.rollNo=1;
    s1.Setage(19);
    s1.getAge();
    s1.Display();

    // Creating Obeject Dyanamically
    Student *s2=new Student;
    s2->rollNo=2;
    s2->Setage(19);
    (*s2).getAge();  // this also a way to call .
    s2->Display();
}