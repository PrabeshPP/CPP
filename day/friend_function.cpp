#include <iostream>
using namespace std;


class ClassB;
class ClassA{
    private:
    int numA;
    friend int add(ClassA,ClassB);
public:
ClassA():numA(10){}
};

class ClassB{
    private :
        int numB;
    friend int add(ClassA,ClassB);
    public:
        ClassB():numB(20){}
};

int add(ClassA a,ClassB b){
    int sum;
    sum=a.numA+b.numB;

    return sum;

}


int main(){
    ClassA a;
    ClassB b;
    int sum=add(a,b);
    cout<<"The sum of two objects variable is :"<<sum<<endl;


}