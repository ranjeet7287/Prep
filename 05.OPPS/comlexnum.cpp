#include<bits/stdc++.h>
using namespace std;
class ComplexNumber
{
    private:
    int real;
    int imagnery;

    public:
    ComplexNumber(int real,int imagnery){
        this->real=real;
        this->imagnery=imagnery;
    }
    void print(){
        cout<<real<<" "<<"+"<<" "<<"i"<<imagnery;
    }
    void plus(ComplexNumber const &c2){
        this->real=this->real+c2.real;
        this->imagnery=this->imagnery+c2.imagnery;
    }
    void multilpy(ComplexNumber const &c2){
        this->real=this->real*c2.real-this->imagnery*c2.imagnery;
        this->imagnery=this->real*c2.imagnery+this->imagnery*c2.real;
    }
};