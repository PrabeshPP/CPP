#include <iostream>
using namespace std;

class BaseClass{
    public:
    virtual void print(){
        cout<<"Base Class"<<endl;

    }
};

class DerivedClass:public BaseClass{
    public:
        // void print() override{
        //     cout<<"Derived Class"<<endl;
        // }

        void print() override;
};

void DerivedClass::print(){ //if we want to use prototype function in Derived Class
    cout<<"Derived Class"<<endl;
}

int main(){
DerivedClass derivedclass;
BaseClass *ptr=&derivedclass;
ptr->print(); // it calls the print() function of derived class since the print() function is overrides.
}