#include<iostream>
#include<sstream>//for converting integer to string using stringstream method
#include<string>//for converting string to integer
#include<cstdlib> //for converting char array to interger
using namespace std;
int main(){
    string str="230";
    cout<<str<<endl;
    int num=stoi(str);//converting string to integer
    cout<<num<<endl;
    char str1[]="121";
    int num1=atoi(str1); //converting character array to integer
    cout<<num1<<endl;
    str=to_string(num);//converting integer to string
    cout<<str<<endl;
/*
converting int value to 
string using StringStream */
stringstream ss;
 ss<<num1;
 string str3=ss.str();
 cout<<str3<<endl;
}