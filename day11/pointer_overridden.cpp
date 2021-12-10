#include<iostream>
using namespace std;

class BaseClass{
    public:
    void output(){
        cout<<"Hello my name is Prabesh Bista. \n I am a mobile app developer.\n";
    }
};

class DerivedClass:public BaseClass{
    public:
    void output(){
        cout<<"This is a derived class."<<endl;

    }
};

//accessing the overridden function using pointer in c++

int main(){
    DerivedClass  derivedclass;
    // pointer of the base type that points to derivedclass
    BaseClass* ptr=&derivedclass; //eventhough the pointer points to derived class,it is actually type of Base Class
    ptr->output();

}