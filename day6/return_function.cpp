#include<iostream>
using namespace std;

int addNum(int num1,int num2){
    int sum=num1+num2;
    return sum;

}

int main(){
    int number1,number2;
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<"Enter the second number:";
    cin>>number2;
    int Sum_of_number=addNum(number1,number2);
    cout<<"The sum of two number is:"<<Sum_of_number;

}