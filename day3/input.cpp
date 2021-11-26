#include<iostream>
using namespace std;
int main(){
    char a;
    int num;
    cout<<"Enter a character:";
    cin>>a;
    cout<<"The entered character is"<<a;
    cout<<"Enter a number";
    cin>>num;
    cout<<"The entered number is "<<num;
    //Talking multiple inputs
    cout<<"Enter a character and a number";
    cin>>a>>num;
    cout<<a<<"\n"<<num;
}