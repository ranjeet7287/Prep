// Intialise List -> for declaring value to const , refrence or other variables
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int age;
    const int rollNo;
    int &x; // age refrence

    // Intialise list
    Student(int r,int age):rollNo(r),age(age),x(this->age){
    }
};
int main(){
    Student s1(101,18);
}