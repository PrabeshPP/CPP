#include<iostream>
using namespace std;


// if base class and derived class has same function ,the derived class funtion would override the base class function

class BaseClass20{
    public:
    void print(){
        cout<<"Base Class Function!"<<endl;
        
    }
};
class DerivedClass:public BaseClass20{
    public:
    void print(){
        cout<<"Derived Class Function!"<<endl;
        cout<<"Successfully override base class function"<<endl;
        BaseClass20::print(); //calling overridden funtion in derived class

    }
};


int main(){
    DerivedClass derivedclass;
    derivedclass.print(); //when print() function is called ,the derived print() function is called instead of base class print() function
    // inorder to call the function of base class ,we have to call base class object
    BaseClass20 baseclass20;

    // it will eradicate funtion overriding
    baseclass20.print();// it will print base class print() function istead of derived class print() function
    
    //accessing the base class function using scope resolution ::
    derivedclass.BaseClass20::print();

}