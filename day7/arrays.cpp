#include<iostream>
using namespace std;

int main(){
    int first_array[]={1,2,3,4,5};
    //arrayType arrayname[arraySize]//
    cout<<"The numbers are :";
    // printing all the data of array using range based loop

    for (const int &n:first_array){
        cout<<n<<" ";
    }

    cout<<"\nThe numbers are:";
    for (int i;i<5;++i){
        cout<<first_array[i]<<" ";
    }





}