#include<iostream>
using namespace std;

int main(){
    int* pointVar; //initializing thr pointer 
    int var1=10;
    pointVar=&var1; //assigning the address of the var1 to the pointer
  cout<<"The address of the variable1 is "<<*pointVar<<endl;
    int var2=20;
    pointVar=&var2;
    cout<<"The value of the variable2 is "<<*pointVar<<endl;

    int var3=40;
    pointVar=&var3;
   cout<<"The value of the variable3 is "<<*pointVar<<endl;

   *pointVar=2; //changing the value of var3 using the pointer
   cout<<"The new value of the variable 3 is "<<var3<<endl; //var3 will print new value


}