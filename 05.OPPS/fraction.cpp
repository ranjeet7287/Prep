#include<bits/stdc++.h>
using namespace std;
class Fraction
{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    private:
    void Simplfy(){
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
    public:
    void add(Fraction const &f){
        int lcm=this->denominator*f.denominator;
        int x=this->numerator*f.denominator;
        int y=this->denominator*f.numerator;

        this->numerator=x+y;
        this->numerator=lcm;
        Simplfy();
    }
    void Substraction(Fraction const &f){
        int lcm=this->denominator*f.denominator;
        int x=this->numerator*f.denominator;
        int y=this->denominator*f.numerator;

        this->numerator=x-y;
        this->denominator=lcm;
        Simplfy();
    }
    void Multiply(Fraction const &f){
        this->numerator=this->numerator*f.numerator;
        this->denominator=this->denominator*f.numerator;
        Simplfy();
    }
};
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    

    f1.add(f2);
    f1.print();

    f1.Multiply(f2);
    f1.print();

    
}