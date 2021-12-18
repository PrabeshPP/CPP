#include <iostream>
using namespace std;

class BaseClass{
public:
virtual void print(){ // using the virtual keyword would make this function overridden
    cout<<"Base Class"<<endl;
}
};
class DerivedClass:public BaseClass{
    public:
    void print(){
        cout<<"Derived Class"<<endl;
    }

};

int main(){
    DerivedClass derived;
    BaseClass *ptr=&derived;
    ptr->print();
    


}