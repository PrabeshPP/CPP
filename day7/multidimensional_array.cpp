#include<iostream>
using namespace std;

int main(){
    // initializing two dimensional array
    int test[3][3]={{1,2,3},
    {4,5,6}
    ,{7,8,9}};
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
        cout  << test[i][j] <<" ";
        }
        cout<<"\n";
    }
    // Taking input for two dimensional array
    int test1[2][3];
    cout<<"enter the six number to store in array:"<<endl;
    for(int i=0;i<2;++i){
        for (int j=0;j<3;++j){
            cin>>test1[i][j];

        }
    }

    for (int a=0;a<2;++a){ //Displaying the elements of two dimensional array
        for(int b=0;b<3;++b){
            cout<<test1[a][b]<<" ";
        }
        cout<<"\n";
    }
}