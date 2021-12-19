#include <iostream>
using namespace std;


//class Template
template<class T>

class Number{
    private:
    //variable of type T
    T num;
    public:
    Number(T n):num(n){}

    T getNum(){
        return num;
    }
};

int main(){
    Number<int> numberint(10);
    Number<double> numberDouble(20.35);
    cout<<"The integer number is "<<numberint.getNum()<<endl;
    cout<<"The double number is "<<numberDouble.getNum()<<endl;
}