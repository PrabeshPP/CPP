#include<iostream>
using namespace std;

/* in c++ code  function should be defined before call.
But if we want to define the function after the call,we should use function prototype
*/
void addNumbers(int num1,int num2);

int main(){
    int number1,number2;
cout<<"Enter the first number:";
cin>>number1;
cout<<"Enter the second number";
cin>>number2;
addNumbers(number1,number2);
}

void addNumbers(int num1,int num2){
int sum=num1+num2;
cout<<"The sum of two numbers is :"<<sum<<endl;
}