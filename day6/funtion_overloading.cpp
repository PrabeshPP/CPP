#include <iostream>
using namespace std;
// overloading using different parameters
float absolute(float a){
    if(a<0){
        a=-a;

    }
    return a;
}

int absolute(int a){
    if(a<0.0){
        a=-a;

    }
    return a;
}
// overloadinf using Different numbers of parameters

void display(int a,double b){
    int sum=0;
    sum=a+b;
    cout<<"The sum of two numbers is :"<<sum<<endl;
}

void display(int a){
    cout<<"The passed integer is :"<<a<<endl;
}


int main(){
    cout<<"Absolute value of -5="<<absolute(-5)<<endl;
    cout<<"Absolute value of -5.55="<<absolute(-5.982f)<<endl;
    display(20,40);
    display(20);


}




