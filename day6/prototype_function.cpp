#include<iostream>
#include<cmath>
using namespace std;

/* in c++ code  function should be defined before call.
But if we want to define the function after the call,we should use function prototype
*/
void greeting();
void addNumbers(int num1,int num2);
void Square(int num11){
int Sqrt=sqrt(num11); // C++ Square Root Function
cout<<"Square root of the number is:"<<Sqrt;
}


int main(){
    int number1,number2;
greeting();
cout<<"Enter the first number:";
cin>>number1;
cout<<"Enter the second number:";
cin>>number2;
addNumbers(number1,number2);
Square(number1);
}

void addNumbers(int num1,int num2){
int sum=num1+num2;
cout<<"The sum of two numbers is :"<<sum<<endl;
}

void greeting(){
    cout<<"Welcome to C++ tutorial of using function prototype!"<<endl;
}