#include<iostream>
using namespace std;
template<class T>
class Calculator{
    private:
        T num1;
        T num2;
    public:
        Calculator(T n1,T n2):num1(n1),num2(n2){}

        void displayResult(){
            cout<<"Numbers :"<<num1<<" and "<<num2<<endl;
            cout<<"The sum is "<<add()<<endl;
            cout<<"The subtraction is "<<sub()<<endl;
            cout<<"The multiplication is "<<mul()<<endl;
            cout<<"The  division is "<<div()<<endl;

        }
       T add(){
           return num1+num2;

        }
        T sub(){
            return num1-num2;

        }
        T mul(){
            return num1*num2;
        }
        T div(){
            return num1/num2;
        }

};

int main(){
    Calculator<int> calculatorint(20,40);
    Calculator<float> calculatorfloat(7.22,3.95);

    cout<<"Integer calculator results :"<<endl;
    calculatorint.displayResult();
    cout<<endl;
    cout<<"Float calculator result :"<<endl;
    calculatorfloat.displayResult();

}