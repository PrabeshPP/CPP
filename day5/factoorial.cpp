#include<iostream>
using namespace std;

//a for loop program to calulate the factorial of the given number

int main(){
    int num,value=12;
    cout<<"enter the number :";
    cin>>num;
    for (int i=1;i<=num;++i){
        value *=i;
    }28
    cout<<"Factorial of"<<num<<":"<<value<<endl;
    
}