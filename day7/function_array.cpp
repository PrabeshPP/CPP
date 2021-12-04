#include <iostream>
using namespace std;

//passing the single-dimensional and multi-dimensional array

void display(int m[5]){
    cout<<"Displaying the marks:";
    for (int i=0;i<5;++i){
        cout<<m[i]<<" ";
    }
}

int main(){
// passing the 1D array
int marks[5]={90,20,50,100,80};
display(marks);

}