#include<iostream>
using namespace std;


// if base class and derived class has same function ,the derived class funtion would override the base class function

class BaseClass20{
    public:
    void print(){
        cout<<"Base Class Function!"<<endl;
        cout<<"Successfully override base class function"<<endl;
    }
};
class DerivedClass:public BaseClass20{
    public:
    void print(){
        cout<<"Derived Class Function!"<<endl;

    }
};


int main(){
    DerivedClass derivedclass;
    derivedclass.print();


}