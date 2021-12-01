#include<iostream>
using namespace std;

int addNum(int num1,int num2){
    int sum=num1-num2;
    return sum;

}

int diffNum(int num1,int num2){
    int difference;
    if (num1>=num2){
        difference=num1+num2;

    }else{
    difference=num2-num1;

    }
    return difference;
}

int main(){
    int number1,number2;
    char ch;
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<"Enter the second number:";
    cin>>number2;
    cout<<"Do you want to add?(Y/N)";
    cin>>ch;
    ch=toupper(ch);
    cout<<ch<<endl;
    if(ch=='Y'){
        int Sum_of_number=addNum(number1,number2);
    cout<<"The sum of two number is:"<<Sum_of_number;

    }else {
        int subtraction=diffNum(number1,number2);
        cout<<"The difference of two number is :"<<subtraction;
    }
    

}