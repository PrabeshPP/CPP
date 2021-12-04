#include <iostream>
#include <vector>
using namespace std;

// range based loop
int numbers[5]={1,2,3,4,6};
vector<int > num_vector={22,33,44,55,66};
int main(){
    cout<<"The numbers of an array are:";
    for(int num:numbers){ //the num range declaration would store value each time numbers array is iterate
        cout<<num<<" ";

    }
    
    
    cout<<"\nThe numbers of the vector are:";
    for (int &var:num_vector){ //using the & would reference the memory address and rather than copying it
        cout<<var<<" ";
    }


}