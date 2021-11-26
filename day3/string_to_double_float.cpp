#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str="123.9821";
    float fl=stof(str);
    cout<<"floating:"<<fl<<endl;//converting string to float
    double num_double=stod(str);
    cout<<"num_double:"<<num_double<<endl;//converting string to double
    stringstream ss1;
    ss1<<fl;
    string str22=ss1.str();
    cout<<"str22:"<<str22<<endl;//converting using string stream
    stringstream ss2;
    ss2<<num_double;
    string str33=ss2.str();
    cout<<"Str33:"<<str33<<endl;



}
