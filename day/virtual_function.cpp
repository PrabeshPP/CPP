#include <iostream>
using namespace std;

class BaseClass{
public:
void print(){
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