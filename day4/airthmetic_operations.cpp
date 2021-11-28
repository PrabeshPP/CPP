#include<iostream>
using namespace std;
 
int main(){
    int a=20;
    int b=40;
    cout<<"a+b:"<<a+b<<endl;//+ is an addition operator
    cout<<"a-b:"<<a-b<<endl;//- is a subtraction operator
    cout<<"a*b:"<<a*b<<endl;// * is a multiplication operator
    cout<<"b/a:"<<b/a<<endl;// / is a division operator
    cout<<"a%b:"<<a % b<<endl; // % is a modulo operator

    // increment and decrement operators

    cout<<"++"<<++a<<endl;
    cout<<"--"<<--b<<endl;

    // C++ Asignment Operators

    b=a;//asigning the value
    cout<<"New value of b:"<<b<<endl;
    b+=a ;//the expression is equal to b=b+a
    cout<<"B :"<<b<<endl;

    // c++ relational operators
    //A relational Operator is used to check the relation between two values

    cout<<"is b<a ?:"<<(b<a)<<endl;
    cout<<"is b not equal to a?:"<<(b!=a)<<endl;
    //if the above operator returns 0 it is false else the expression is true

    // C++ Logical Operators
    int value1=20;
    int value2=25;
    bool result=(value1<=value2 && value2>=value1);// && is And operator
    cout<<"True or False? :"<<result<<endl;
    result=(value1<=value2 || value2<value1);// || is an OR operator
    cout<<"True or False? :"<<result<<endl;
    result=!(value1>value2); // ! stands for Not Operator
    cout<<"True or False ? :"<<result<<endl;
     // C++ Bitwise Operaions
     int valu11=10;
     int valu22=9;
     cout<<"And bit wise operator:"<<(valu11 &valu22)<<endl;// & is And bitwise operator
     
     cout<<"OR bit wise operator:"<<(valu11|valu22)<<endl;// | is OR bitwise Operator

     cout<<"XOR bit wise operator:"<<(valu11^valu22)<<endl;// ^ is XOR Operator
    cout<<"~("<<valu11<<")="<<~valu11<<endl; // ~ is bitwise Operator
    
    // C++ shift Operator

    int value101=500,i;
    cout<<"Shift Right :"<<endl;

      for (i=0;i<4;i++){
    cout<<"500:("<<i<<") ="<<(value101>>i)<<endl; // >> stands for right shift operator
};

for(i=0;i<4;i++){
    cout<<"400:("<<i<<")="<<(400<<i)<<endl; // << stands for left shift operator
}

// Comments
// it is a single line comments
/* 
this is a
double line comments
*/



}
