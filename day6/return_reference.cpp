#include<iostream>
using namespace std;
// Global Variable;
int num;
//function declaration

int& test();// int& is a refrence to an integer variable

int main(){
    test()=20; //number 20 would be store  to the memory address of num .Hence,the num variable would have some value
    cout<<num;

}

int& test(){
    return num; // it does not return num value rather a memory address of the variable num;
}