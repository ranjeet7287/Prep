// In this question we will learn some properties of Constructor.
// 1.Constructor      -: 1.Deafult  &&  2.Paramatrized.
// 2.Copy Constructor.
// 3.Copy Assignment.
// 4.Destructor.
#include<iostream>
using namespace std;
class Student(){
    public:
    int age;
    int rollNo;
    // a. Deafult
    Student(){
        cout<<"Deafult"<endl;
    }
    // b.Paramterized
    Student(int age,int rollNo){
        this->age=age;
        this->rollNo=rollNo;        
    }
    // 4. Destructor
    ~Student(){
        
    }
};
int main()
{
    // 2.Copy
    Student s1(19,1);
    Student s2(s1);  // s2.age=s1.age    s2.rollNo=s1.rollNo


    // 3.Copy Assingment operator
    Student s3(19,2);
    Student s4(29,3);
    s4=s3;


}
