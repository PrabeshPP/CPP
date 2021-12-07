#include <iostream>
using namespace std;

//passing by reference without pointers

void swap(int &n1,int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}


int main(){
    int a=1,b=20;
    cout<<"Before swaping the value :";
    cout<<a<<","<<b<<endl;
    cout<<"After swaping the value :";
    swap(a,b);
    cout<<a<<","<<b;
}