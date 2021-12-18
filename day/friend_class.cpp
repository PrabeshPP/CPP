#include <iostream>
using namespace std;
class ClassB;
class ClassA{

    private:
    int num1;
    int num2;
    friend class ClassB;

public:
    ClassA():num1(2),num2(5){}
};

class ClassB{
    private:
    int num3;
    public:
    ClassB():num3(10){}

int add(){
    ClassA objectA;
    int sum;
    sum=objectA.num1+objectA.num2+num3;
    return sum;
}
};


int main(){
    ClassB objectB;
    int sum=objectB.add();
    cout<<"The sum of three number is :"<<sum<<endl;

}