#include <iostream>
using namespace std;

//passing by reference without pointers

void swap(int &n1,int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
}

//passing by reference with pointers and using function prototype
void swap1(int*, int*);


int main(){
    int a=1,b=20;
    cout<<"Before swaping the value :";
    cout<<a<<","<<b<<endl;
    cout<<"After swaping the value :";
    swap(a,b);
    cout<<a<<","<<b;
    cout<<"\n";
    int var1=200,var2=600;
    cout<<"Result after swaping the variable using pointers:";
    swap1(&var1,&var2);
    cout<<var1<<","<<var2;
}

void swap1(int* n11,int* n22){
    int temp;
    temp=*n11;
    *n11=*n22;
    *n22=temp;

}