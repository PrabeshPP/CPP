#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int* ptr;
    cout<<"Displaying the address of the array cells using & :";
    for (int i=0;i<5;++i){
        cout<<"The address of the "<<i<<"th element is "<<&arr[i]<<endl;
    }

    cout<<"Displaying the address of the array elements using pointer :";
    ptr=arr; //storing the address of the first element of an array
    for (int i=0;i<5;++i){
        cout<<"The address of the "<<i<<"th element is "<<ptr+i<<endl;
    }


    //Array name used as pointer
    float arr1[6];
    cout<<"Enter the six numbers :"<<endl;
    for(int i=0;i<6;++i){
        cin>>*(arr+i);

    }

    cout<<"The six numbers are :";
    for(int i=0;i<6;++i){
        if(i!=5){
        cout<<*(arr+i)<<" , ";
        }else{
            cout<<*(arr+i)<<" . ";
        }
        
        
    }
}