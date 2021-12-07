#include <iostream>
using namespace std;

int main(){
    // sotoring thr address of the first element of an array
    int* ptr;
    int arr[5];
    ptr=arr; //refrencing address of the first element of an array in pointer
    cout<<ptr<<endl;
    ptr=arr+1; //arr+1 is equal to &arr[1]
    cout<<ptr;
}