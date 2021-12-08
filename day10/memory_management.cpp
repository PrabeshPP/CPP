#include <iostream>
using namespace std;


//c++ new operator
// use new to allocate the memory address 
// we should use delete to deallocate the memory address
int main(){
    int* pointVar;
    //dynamically allocating memory
    //for an int variable
    pointVar=new int;
    *pointVar=30;
    cout<<*pointVar;
    //deallocate the memory
    delete pointVar;
    

}