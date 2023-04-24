// In this particular we will try to learn about this property in OPPS.
#include<bits/stdc++.h>
using namespace std;
// before learning to this property we will look that What Class and Object means.
// Defination -> CLASS -> Class is Basically a template of that define the property 
//                        and function of the Object.
//               Object ->Basic Simple Indentity which proccess some property.

//       Object -> Student
//                      -> Name    --------->    Object
//                      -> RollNo         -->    Property
//                      -> Age            -->
//                      -> Address --------->
//       Class is Umbralla term which define Object and Object Property .
// OK
// Now I will come into the actual question what is this property ?
// In a very Simple way it's the ADDRESS OF OBJECT that contain deffrent property


// this->name=name;
// here we are pointng to the Object property name and passing the value of name which passed by user in the function.
class Student
{
    public:
    int rollNo;
    int age;
    Student(int rollNo,int age){
        this->rollNo=rollNo;
        this->age=age;
    }
    void Dispaly(){
        cout<<rollNo<<" "<<age;
    }
};
int main()
{
    Student s1(1,19);
    s1.Dispaly();
}