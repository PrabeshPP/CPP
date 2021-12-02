#include<iostream>
using namespace std;

void default_function(int a=10,float b=30.23);

int main(){
    default_function();// default argument is passed and print
    default_function(20);//20 is passed as a first argument and the b would have default argument
    default_function(20,40.2);// 20 & 40.2 is passed as first and second argument respectively 
    default_function(3.45); //since we have to pass a new 

}

void default_function(int a ,float b){
    cout<<"The integer is :"<<a<<endl;
    cout<<"The floating point number is :"<<b<<endl;
}