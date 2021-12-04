#include <iostream>
using namespace std;

//passing the single-dimensional and multi-dimensional array

//displaying the 1D array
void display(int m[5]){
    cout<<"Displaying the marks:";
    for (int i=0;i<5;++i){
        cout<<m[i]<<" ";
    }
    cout<<"\n";

}

//displaying the 2d array
void display1(int n2[2][3]){
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            cout<<n2[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
// passing the 1D array
int marks[5]={90,20,50,100,80};
display(marks);

//passing the 2D array
int marks1[2][3]={{1,2,3},{4,5,6}};
display1(marks1);

// returning the array from function is also possible.will learn that in pointers.

}