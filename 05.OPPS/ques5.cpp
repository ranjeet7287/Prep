// 1.Shallow Copy -> Just Copy the address of first location.
#include<bits/stdc++.h>
using namespace std;
class Student
{
    private:
    char *name;
    int rollNo;

    public:
    Student(char *name,int rollNo){
        this->name=name;        //  just copying the address of first location of an array
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

    s1.Display();    //  Shallow copy show changes
}