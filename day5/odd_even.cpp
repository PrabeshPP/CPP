#include <iostream>
using namespace std;
// a simple application to check whether the given number is odd or even
 int main(){
     int number1=20;
     int number2=23;
     if(number1 % 2==0){
         cout<<"Number1 is even"<<endl;
         
     }else{
         cout<<"Number 1 is odd"<<endl;
     }

     if(number2 % 2==0){
         cout<<"Number2 is even"<<endl;
     }else{
         cout<<"Number2 is odd"<<endl;
     }
 }