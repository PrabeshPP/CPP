#include<iostream>
using namespace std;
 
int main(){
    char oper;
    int num1,num2;
    cout<<"Enter an operator from the list  {+,-,*,/,%} :";
    cin>>oper;
    cout<<"Enter two numbers";
    cin>>num1>> num2;

    // switch statement :Note*(char has to be inside a single quotation like '')

    switch (oper)
    {
    case '+':
        cout<<"Sum of two number is :"<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<"Difference of two number is:"<<(num1-num2)<<endl;
        break;
    case '*':
        cout<<"Product of two number is :"<<(num1*num2)<<endl;
        break;

    case '/':
        cout<<"Division of two number is :"<<(num1/num2)<<endl;
        break;
    case '%':
    cout<<"Modulo division of two number is :"<<num1%num2<<endl;
    break;


    
    default:
    cout<<"Error!The operator is not correct:";
        break;
    }


}