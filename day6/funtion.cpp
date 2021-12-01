#include <iostream>
using namespace std;

void printNum(int num1,float num2){
   cout<<"The integer is :"<<num1<<endl;
   cout<<"The floating number is :"<<num2<<endl;
}

int main(){
    int num1;
    float num2;
cout<<"Enter the integer and floating number:";
cin>>num1>>num2;

printNum(num1,num2);
}

